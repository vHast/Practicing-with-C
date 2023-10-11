#include <stdio.h>
#include <ctype.h>

int main() {
	char unit; // Either C for Celcius or F for Fahrenheit
 	float temp;

  	printf("\nIs the temperature in (F) or (C)?: ");
   	scanf("%c", &unit);

    unit = toupper(unit); // In case the scanf detects a c in lowercase it won't take it as valid, this converts it into uppercase.

    if(unit == 'C') {
    	printf("\nEnter the temperature in Celsius: ");
     	scanf("%f", &temp);
      	temp = (temp * 9 / 5) + 32;
       	printf("\nThe temp in Fahrenheit is: %.1f\n", temp);
      
	} else if (unit == 'F') {
    	printf("\nEnter the temperature in Fahrenheit: ");
     	scanf("%f", &temp);
      	temp = ((temp -32) * 5) / 9;
       	printf("\nThe temp in Celsius is: %.1f\n", temp);
    } else {
    	printf("\n %c is not a valid unit of measurement\n", unit);
    }
    return 0;
}