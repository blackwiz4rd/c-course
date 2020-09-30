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

int allocstr(int len, char **retp) {
	char *p = malloc((len + 1)*(sizeof(char)));
	if(p == NULL)
		return 0;
	*retp = p;
	return 1;
}

int main() {
	char *s = "Hello boy";
	char *c;

	if(allocstr(strlen(s), &c)) {
		strcpy(c, s);
		printf("string %s, %s", s, c);
		free(c);
	}
	else
		printf("error");
}
