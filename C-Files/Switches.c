#include <stdio.h>

int main() {

	char grade;

 	printf("\nEnter a letter grade: ");
 	scanf("%c", &grade);

  	switch(grade) { // Whatever value you want to test for equality place within the parentheses,  in this case, I would like to check my grade
   		case 'A':
     		printf("Perfect!\n");
       		break;
       	case 'B':
     		printf("You did good!\n");
       		break;
		case 'C':
     		printf("You did okay!\n");
       		break;
        case 'D':
     		printf("At least is not an F!\n");
       		break;
        case 'F':
        	printf("You failed!\n");
         	break;
        default:
        	printf("Please enter only valid grades\n");
    } 
	return 0;
}