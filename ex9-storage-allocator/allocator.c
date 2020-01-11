#include <stdio.h>

/*
 * general implementation included in stidio as malloc and free
 * https://devdocs.io/c/memory/malloc
 *
 * */

/**
 * rudiment storage allocator
 * storage mantained in a Stack
 * alloc(n) returns a pointer to n consecutive character positions, can be used by caller to store chars
 * afree(p) releases the storage based on pointer p
 * 
 * allocbuf chars array
 * allocp points to the next free element
 *
*/

#define ALLOCSIZE	1000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n) {
	if (allocbuf + ALLOCSIZE - allocp >= n){
		allocp += n;
		return allocp - n;
	}
	else
		return 0;
}

void afree(char *p) {
	if (p >= allocbuf & p <= allocbuf + ALLOCSIZE)
		allocp = p;
}

int main() {
	char *s = alloc(4);
	for(int i = 0; i < 4; i++)
		s[i] = 'a' + i;
	for(int i = 0; i < 4; i++)
		printf("pos %d elem %c \n", i, s[i]);
	afree(s);
}

