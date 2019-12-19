#include <stdio.h>

int main() {
	/**
	 * machine dependent sizes
	 * signed or unsigned chars or ints
	 * limits.h and float.h	
	 */

	int intType;
	short shortType;
	long longType;
	float floatType;
	double doubleType;
	char charType;
	long double longDoubleType;

	printf("size expressed in bits \n");
	printf("size of int %ld \n", 8*sizeof(intType));
	printf("size of short %ld \n", 8*sizeof(shortType));
	printf("size of long %ld \n", 8*sizeof(longType));
	printf("size of float %ld \n", 8*sizeof(floatType));
	printf("size of double %ld \n", 8*sizeof(doubleType));
	printf("size of char %ld \n", 8*sizeof(charType));
	printf("size of long double %ld \n", 8*sizeof(longDoubleType));}
