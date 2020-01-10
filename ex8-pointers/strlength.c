#include <stdio.h>

/**
 * arrays
 * pointers relation to arrays
 * strlength by passing array of chars to func 
 * */


int strlength(char *s) {
	char *p = s;
	while(*p != '\0')
		p++;
	return p - s;
}

int main() {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};	
	int *pa = &a[0];
	printf("address of first element of %p = %p", pa, a);
	printf("\naddress of third element of %d = %d", *(pa+2), *(a+2));
	printf("\nstring length of word: ciao, %d", strlength("ciao"));
}
