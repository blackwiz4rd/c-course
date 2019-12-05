#include <stdio.h>

/**
 * arrays
 * count the number of digits from 0 to 9 entered by keyboard
 * 223
 * 0 0 0 0 0 ...
 * 0 0 2 1 0 ...
 */

int main() {
	int ndigits[10];
	int c;
	int nother;

	nother = 0;

	for (int i = 0; i < 10; i++) {
		ndigits[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			ndigits[c - '0']++;
		}
		else {
			nother++;	
		}
	}	

	for(int i = 0; i < 10; i++) 
		printf("i: %d, ndigits %d \n", i, ndigits[i]);
	printf("nother: %d", nother);	
}
