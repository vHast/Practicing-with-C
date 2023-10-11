#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // We can't change the size of the array after the program is running, if it exceeds its value it will throw a overflow error

    int age; // Setting the value that we would need to get

    printf("\nWhats your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHello %s, how old are you?", name);
    scanf("%d", &age); // Scans the input of the user, then assigns it into age

    printf("You are %d years old.", age);

    return 0;
}