#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
	int max = findMax(3,4);

  	printf("%d", max);
   
}

// On the findMax function we take the int values we previously set as argument and check if **x is greater than y** then, if the condition is true, we return x, otherwise y.