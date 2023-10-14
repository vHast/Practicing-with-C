#include <stdio.h>

int main() {

	FILE *pF = fopen("/home/kaz/Active/BroCode/Practicing-with-C/C-Files/poem.txt", "r"); // r fopr reading

 	char buffer[255]; // Holds one line at a time

  	while(fgets(buffer, 255, pF) != NULL) {
   		printf("%s", buffer);
    }
	fclose(pF);
 	return 0;
}