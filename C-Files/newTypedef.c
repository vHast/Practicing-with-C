#include <stdio.h>
#include <string.h>
// typedef is a reserved keyword that gives an existing datatype a "nickname", mostly used for convenience.

// typedef char user[25]

typedef struct
{
	char name[25];
 	char password[12];
  	int id;
} User;

int main() {

	//user user1 = "User";
 
	User user1 = {"UserTwo", "password123", 123456789};
 	User user2 = {"UserThree", "password123", 123456789};

  	printf("%s\n", user1.name);
   	printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("%s\n", user2.name);
   	printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    
 	return 0;
}