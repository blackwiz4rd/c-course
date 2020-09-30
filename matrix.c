#include <stdio.h>

int main() {
	int a[3][3] = {0,2,3,4,5,6,7,8};
	printf("element %d %d", *a[1], *(a[0]+3));
}
