#include <stdio.h>

int main() {
	FILE *pF = fopen("/home/kaz/Active/BroCode/Practicing-with-C/C-Files/test.txt", "w"); // a for appending
 
	fprintf(pF, "\nThe New York Times");
 	fclose(pF);
  	return 0;
}