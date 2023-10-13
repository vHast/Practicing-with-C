#include <stdio.h>

void hello(char[], int); // * Function prototype

int main() {
	char name[] = "User";
 	int age = 21;

  	hello(name, age);

   	return 0;
}

void hello(char name[], int age) {
	printf("\nHello %s", name);
 	printf("\nYou are %d years old", age);
}

// Functions prototype are going to **ensure that we have the right number of arguments when we invoke a function**