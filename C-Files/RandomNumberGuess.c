#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses = 0;
    int answer;

    // Uses the current time as the seed to generate random numbers
    srand(time(0));

    // The answer will be a random generated that will be the modulus of MAX + MIN ( set as an offset)

    answer = rand() % MAX + MIN;

    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        guesses++; // Increment the guess count

        if (guess > answer) {
            printf("Too high!\n");
        } else if (guess < answer) {
            printf("Too low!\n");
        } else {
            printf("Correct!\n");
        }
    } while (guess != answer);

    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);

    return 0;
}