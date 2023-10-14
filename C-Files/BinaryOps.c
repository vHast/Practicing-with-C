# include <stdio.h>

int main() {
    int x = 6;  // 6 ==   00000110 that's 8 bits = 1 byte
    int y = 12; // 12 ==  00001100
    int z = 0;  // 0 ==   00000000
                //        --------
    z = x & y;  // 4 ==   00000100

    printf("AND = %d\n", z); // 4

    z = x | y; 

    printf("OR = %d\n", z); // 14

    // There is an extended detailing of this matter in 36. Bitwise Operators
}