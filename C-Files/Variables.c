#include <stdio.h>

int main() {

    int x; // Declaration
    x = 123; // Initialization

    int y = 321; //Declaration + Initialization

    int age = 21; // Integer (whole number)
    float gpa = 2.05; // Floating point number (contains a decimal portion)
    char grade = 'C'; // Single character
    char name[] = "Bro"; // Array of characters

    printf("Hello %s,\n", name);
    printf("You are %d years old\n", age); // %d stands for digit, placeholders
    printf("You average grade is %c\n", grade); // Grade
    printf("Your gpa is %.1f\n", gpa); // Formatting with float

    return 0;
}