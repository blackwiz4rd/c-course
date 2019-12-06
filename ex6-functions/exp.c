#include <stdio.h>

/**
 * functions
 * variables passed by value
 * arrays passed by address
 * local vs global variables
 */

int power(int m, int n);
void iter_power(int powers[], int len);
void print_power(int powers[], int len);

int power(int base, int exp) {
	/*2**3 = 2 * 2 * 2*/
	int p;
	for (p = 1; exp > 0; exp--)
		p = p * base;
	return p;
}

void iter_power(int powers[], int len) {
	for (int i = 0; i < len; i++)
		powers[i] = power(2,i);
}

void print_power(int powers[], int len) {
	for (int i = 0; i < len; i++)
		printf("index %d value %d \n", i, powers[i]);
}

int main() {
	int b = 2;
	int e = 3;
	printf("base %d, exp %d, power %d \n", b, e, power(b, e));
	printf("base %d, exp %d \n", b, e);

	int powers[10];
	iter_power(powers, 10);
	print_power(powers, 10);
}
