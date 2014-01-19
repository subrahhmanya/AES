#define Mx 0x11b
#define mx 0x1b

#define	xtime(b) ((b & 0x80) ? ((b << 1) ^ mx) : (b << 1))

Nb
//Number of columns (32-bit words) comprising the State. For thisstandard, Nb = 4. (Also see Sec. 6.3.)

Nk
//Number of 32-bit words comprising the Cipher Key. For thisstandard, Nk = 4, 6, or 8. (Also see Sec. 6.3.) 

Nr
//Number of rounds, which is a function of Nk and Nb (which isfixed). For this standard, Nr = 10, 12, or 14. (Also see Sec. 6.3.)

AddRoundKey();
//Transformation in the Cipher and Inverse Cipher in which a Round Key is added to the State using an XOR operation.
//The length of a Round Key equals the size of the State (i.e., for Nb = 4, the RoundKey length equals 128 bits/16 bytes). 


MixColumns();
//Transformation in the Cipher that takes all of the columns of the State and mixes their data (independently of one another) toproduce new columns.

ShiftRows();
//Transformation in the Cipher that processes the State by cyclically shifting the last three rows of the State by different offsets.

SubBytes();
//Transformation in the Cipher that processes the State using a non­ linear byte substitution table (S-box) that operates on each of the State bytes independently.


InvMixColumns();
//Transformation in the Inverse Cipher that is the inverse ofMixColumns().

InvShiftRows();
//Transformation in the Inverse Cipher that is the inverse ofShiftRows(). 

InvSubBytes();
//Transformation in the Inverse Cipher that is the inverse of SubBytes(). 


RotWord();
//Function used in the Key Expansion routine that takes a four-byte word and performs a cyclic permutation.

SubWord();
//Function used in the Key Expansion routine that takes a four-byte input word and applies an S-box to each of the four bytes to produce an output word.

Rcon[]
//The round constant word array.
