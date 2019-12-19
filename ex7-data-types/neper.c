#include <stdio.h>
#include <math.h>

float exponential(x,n) {
	float sum = 1;

	for (int i = n - 1; i > 0; i--)
		sum = 1  + x * sum / i;
	
	return sum;
}

double exponential_(x,n) {
	double sum = 1;
	for (int i = n - 1; i > 0; i--)
		sum *= (1 + 1 / i);
	/*
	for (int i = n - 1; i > 0; i--)
		sum = 1  + x * sum / i;
	
	*/return sum;	
}

int main() {
	float x = 1;
	for (int j = 0; j < 100; j++)
		printf("value of e %.7f %.15f \n", exponential(x,j), exponential_(x,j));	
}
