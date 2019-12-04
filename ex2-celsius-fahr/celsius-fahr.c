#include <stdio.h>

int main() {
/* 
 * comments
 * declarations
 * variables
 * arithmetic expressions
 * loops
 * formatted output
 *
 * celsius = 5*(fahr-32)/9*/
	int lower, upper;
	lower = 0;
	upper = 300;
	int step = 20;
	int fahr = lower;
	while (fahr <= upper) {
		float celsius = 5.0/9.0*(fahr-32); 
		printf("farh: %3d, celsius: %3.3f \n", fahr, celsius);
		fahr = fahr + step;
	}

}
