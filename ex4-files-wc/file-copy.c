#include <stdio.h>

int main() {
	/**
	 *read, write on terminal
	*/
	int c;
	while((c = getchar()) != EOF) {
		putchar(c);
	}
}
