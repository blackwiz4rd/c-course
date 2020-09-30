#include <stdio.h>
#include <string.h>

#define MAXLINES	500
char *lineptr[MAXLINES];

int main() {
	int nlines;
	if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: intput too big");
		return 1;
	}
}

#define MAXLEN	1000
int readlines(char *lineptr[], int maxlines) {
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
		if (nlines >= maxlines || p = alloc(len) == NULL)
			return -1;
		else {
			line[len-1] = '\0'; /*delete new line*/
			strcpy(p, line);
			lineptr[nlines++] = p;
		}	
	
	return nlines;
}

void writelines(char *lineptr[], int nlines)
{
	int i;
	for (int i = 0; i < nlines; i++)
		printf("%s \n", lineptr[i]);
}

/*continues*/
