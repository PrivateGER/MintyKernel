#include <stdlib.h>

int seed = 0;

int modulus = 2147;
int multiplierA = 16;
int incrementC = 3;

void srand(unsigned int newSeed) {
	seed = newSeed;
}

int rand(void) {
	seed = ( multiplierA * seed + incrementC ) % modulus;
	return seed; 
}
