Pojectlog
---------

This is the projectlog for the implementation of the AES algorithm (rijndael).

###First words
####19.1.2014

My brother mentioned one of hes projects that would include saving passwords on a device. In order to have the passwords to be secure they have to be encrypted. Optimally the device would include both the encrypted data and an algorithm for decrypting it, enabling the use of the device to be independent of other software or hardware. The execution of the algorithm therefore has to happen on the device itself. The ATmega168 is a microprosessor with EEPROM that suits password storing well and it is also capaable of executing the required algorithms on its own.

The reason AES was chosen to be the algorithm of choise was mainly because it's a well known and up-to-date encryption algorithm. Because of it's popularity and status it is also a algorithm that is well documented and therefore easier to implement in a correct way. This is only a personal hobby- or study-style project, so the most important goal is to have a correctly working implementation of the algorithm, not to have it optimized for time or space requiments. Since this program is intended to be executed on the AVR it still has a real limitation of memory and register size.

###Specifications
####19.2.2014

I've downloaded some specification documents and some test data for my research. I am familiar with the algorithm on a very distant level, but have never tried to fully implement it. We did have some excercises on our C programming course that had a connection to the AES algorithm but because the scope of the course was only the language we where given excersises without being told what the theory was behind it all. I might be implementing something i have implemented before but i still want to do everything from scratch to clarify my knowlege of the algorithm.

I'll probably only implement the algorithm according to its specification. I will not focus on the cryptographic theory behind the algorithm because my knowlege of the field is quuite elementary. If i ever do study some theory of cryptography, at least i'll have some practical experience to build my knowlege on.

