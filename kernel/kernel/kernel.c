#include <stdio.h>
#include <stdlib.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Minty Kernel! PRNG: \n");


	for(int i = 0; i < 1; i++) {
		printf("Seed: %d\n", i);
		srand(i);
		for(int j = 0; j < 5; j++) printf(" Rand: %d ", rand());
	}

	int count = 5000;
	int arr[count];
	for(int i = 0; i < count; i++) {
		arr[i] = rand();
		if(i % 500 == 0) printf("%d ", i / 500);
	}


	for(int i = 0; i < 1000; i++) {
		int matchingCount = 0;
		for(int j = 0; j < count; j++) {
			if(arr[j] == i) matchingCount++;
		}
		if(matchingCount > 0) { 
			printf("%d:", i);
			printf("%d ", matchingCount);
		}
	}
}
