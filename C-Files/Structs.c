#include <stdio.h>
#include <string.h>

// Collection of related members, they can be of different data types and listed under one name in a block of memory.

// Very similar to classes

// Can't contain any methods inside

struct Player
{
	char name[12];
 	int score;
};

int main() {
	struct Player player1;
 	struct Player player2;

  	strcpy(player1.name, "User");
   	player1.score = 4;

    strcpy(player2.name, "UserTwo");
   	player2.score = 2;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
	return 0;
}