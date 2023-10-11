#include <stdio.h>

int main() {
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

 	if(age >= 18) { // If some condition here is true, executes the block
  		printf("You are now signed up!\n");
    } else {
        printf("You are too young to sign up!\n");
    }

    return 0;
}