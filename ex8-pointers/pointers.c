#include <stdio.h>

int main() {
	char c = 'A';
	char *p; /*indirection or dereferencing operator, pointer to char*/
	p = &c;
	printf("pointer %p, value %c \n", p, c);
	printf("value using dereferencing operator %c", *p);
}

