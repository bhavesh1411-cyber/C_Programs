#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // seed random number generator
    int secret_number = rand() % 100 + 1;  // random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    printf("I'm thinking of a number between 1 and 100!\n");

    while (guess != secret_number) {
        printf("Take a guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You got it in %d attempts.\n", attempts);
        }
    }

    return 0;
}