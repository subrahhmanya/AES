

int cipher(uint8_t* in[4*Nb], uint8_t* out[4*Nb], uint32_t* w[Nb*(Nr+1)]){
	uint8_t state[4,Nb] = in;
	AddRoundKey(state, w[0, Nb-1])
	int i;
	for (i=1; i<Nr; i++){
		SubBytes(state);
		ShiftRows(state);
		MixColumns(state);
		AddRoundKey(state, w[i*Nb, (i+1)*Nb-1]);
	}
	SubBytes(state)
	ShiftRows(state)
	AddRoundKey(state, w[Nr*Nb, (Nr+1)*Nb-1])
	out = state
}

int keyExpansion(uint8_t* key[4*Nk], uint32_t* w[Nb*(Nr+1)], Nk){
	uint32_t temp;
	int i=0;
	while (i < Nk){
		w[i] = word(key[4*i], key[4*i+1], key[4*i+2], key[4*i+3]);
		i++;
	}
	i = Nk;
	while (i < Nb * (Nr+1)){
		temp = w[i-1];
		if (i % Nk = 0)
			temp = SubWord(RotWord(temp)) ^ Rcon[i/Nk];
		else if (Nk > 6 and i mod Nk = 4)
			temp = SubWord(temp);

		w[i] = w[i-Nk] xor temp;
		i++;
	}
}


int decipher(uint8_t* in[4*Nb], uint8_t* out[4*Nb], uint32_t* w[Nb*(Nr+1)]){
	uint8_t state[4,Nb] = in;
	AddRoundKey(state, w[Nr*Nb, (Nr+1)*Nb-1]);
	for(i=Nb; i>0; i--;){
		InvShiftRows(state);
		InvSubBytes(state);
		AddRoundKey(state, w[0, Nb-1]);
		InvMixColumns(state);
	}
	InvShiftRows(state) 
	InvSubBytes(state) 
	AddRoundKey(state, w[0, Nb-1])
	out = state
}