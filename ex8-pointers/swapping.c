#include <stdio.h>

/**
 * create a function that swaps two variables using pointers
 */

void swap(int *px, int *py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int a, b;
	a = 10;
	b = 20;
	printf("before a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("after a: %d, b: %d", a, b);

}
