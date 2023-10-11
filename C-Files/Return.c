#include <stdio.h>
 
double square(double x) { // We have to determine the type of value that we are supposed to return, in this case is double
	double result = x * x;
 	return result;
}

int main() {
	double x = square(3.14);
	printf("%lf\n", x);
 	return 0;
}