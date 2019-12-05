#include <stdio.h>
#include <limits.h>

int main() {
	printf("min: %d, max: %d \n", INT_MIN, INT_MAX);
	int a = INT_MAX-20;

	for (int i = 0; i < 100; i++)
		printf("a: %d, i: %i \n", a++, i);

}
