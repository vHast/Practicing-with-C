#include <stdio.h>

int main() {

 	for(int i = 1; i <= 30; i++) {

  	if (i == 23) {
    	continue;
      	// This will skip the rest of the code and force the next iteration of the loop.
        }

    if (i == 29) {
        break;
        // This will literally break out of the loop.
    }
         
  	printf("%d\n", i);
    }
	return 0;
}