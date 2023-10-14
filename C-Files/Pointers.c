#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old.\n", *pAge);
}

int main() {

    int age = 21;
    int *pAge = &age; 
    
    // int *pAge = NULL; // Good practice to assign NULL if declaring a pointer

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge );
    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); // Dereferencing

    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of age: %d bytes\n", sizeof(pAge)); // This will be 8 bytes, since that is enough to store a hexadecimal value.

    printAge(pAge);
    pAge = &age;

}