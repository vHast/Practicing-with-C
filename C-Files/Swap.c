#include <stdio.h>
#include <string.h>

int main() {
	char x[15] = "Water";
 	char y[15] = "Lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x); // X
   	printf("y = %s\n", y); // Y

  	return 0;
}