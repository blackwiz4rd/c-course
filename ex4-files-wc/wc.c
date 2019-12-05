#include <stdio.h>

#define IN	0
#define OUT	1

int main() {
	/**
	 * if, else if condition
	 *
	*/

	/*ciao sono
	 *luca
	 */

	int nc, nl, nw;
	nc = nl = nw = 0;
	int state;
	state = OUT;

	int c;

	while((c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
		}
		if (c == '\n' || c == ' ') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			nw++;
		}
	}

	printf("characters count: %d, lines count: %d, words count: %d", nc, nl, nw);
}
