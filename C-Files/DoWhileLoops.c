#include <stdio.h>

int main() {

    // A do while loop always executes a block of code once, then, checks a condition

 	int number = 0;
  	int sum = 0;

   	do {
    	printf("Enter a # above 0: ");
     	scanf("%d", &number);
      	if(number > 0 ) {
       		sum += number;
        }
    } while( number > 0);

    printf("Sum: %d\n", sum);
}