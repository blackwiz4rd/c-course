#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * 0xaddr value
 * since c is a pointer its value is 0xaddr
 * &c is the address of 0xaddr which is a pointer to pointer 
 * when using *rept, we are changing 0xaddr with something new
 * the pointer c is now set where free space is available
 * */

int allocspace(int strlen, char *retp) {
	char *p = malloc(strlen*sizeof(char));
	if (p == NULL)
		return 0;
	retp = p;
	return 1;
}

int main() {
	char *s = "hello guys";
	char *c;
	if (allocspace(strlen(s), c)) {
		strcpy(c, s);
		printf("I copied c in s, %s, %s", c, s);
		free(c);
	}
	else
		printf("error");	
}

