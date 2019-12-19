#include <stdio.h>

/*equivalent to char s[]*/
int strlength(char *s) {
	char *p = s;
	while(*p != '\0')
		p++;
	return p - s;
}

int main() {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int *pa;
	pa = &a[0]; /* pa = a */
	int i = 3;
	printf("value of %d element: %d = %d = %d\n", i, a[i], *(a+i), *(pa+i));
	printf("length of string %d", strlength("hey you"));
}
