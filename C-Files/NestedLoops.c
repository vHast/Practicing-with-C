#include <stdio.h>

int main() {

    // A loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter a # of rows: ");
    scanf("%d", &rows);
    printf("\nEnter a # of columns: ");
    scanf("%d", &columns);
 
    // Scanf will get the \n character from this thing, and it will pass it into the next one, we'll have to clear the buffer here.

    printf("\nEnter a symbol to use: ");
    scanf(" %c", &symbol); // The space before the %c will skip any leading whitespace characters, including the newline character.
 
    for (int i = 1; rows >= i; i++ ) { // Iterate once per every row
        for (int j = 1; columns >= j; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}