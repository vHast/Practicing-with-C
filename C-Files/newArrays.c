#include <stdio.h>

int main() {
 
	// Data structure that can store many values of the same data type

 	double prices[5] = {5.0, 10.0, 15.0, 25.0, 20.0};

   	printf("$%.2lf\n", prices[1]); // $10.00
	return 0;
}