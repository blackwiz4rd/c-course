#include <stdio.h>

/**
 * create char
 * create pointer to char
 * dereferencing operator to access value
 */

int main() {
	char c = 'A';
	char *pc;
	pc = &c; /* pc contains the address of c */
	printf("address %p value %c", pc, c);
	printf("value by using the derefering operator on pointer", *pc);	
}
