#include <stdio.h>

int main() {
    short a = 'X';
    short b = 'Y';
    short c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    // Extended information in 37 - Memory Addresses
    
    return 0;
}