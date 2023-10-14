#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

    // Each of these constants has an associated integer
int main() {

    enum Day today = Sun;

    // printf("%d\n", today); // 1

    if(today == Sun || today == Sat) {
        printf("\nIt's the weekend.");
    } else {
        printf("\nI have to work today");
    }

    return 0;
}