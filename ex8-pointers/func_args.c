#include <stdio.h>

void swap(int *px, int *py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int a = 10;
	int b = 2;
	printf("before a %d, b %d\n", a, b);
	swap(&a, &b);
	printf("after a %d, b %d", a, b);
}
