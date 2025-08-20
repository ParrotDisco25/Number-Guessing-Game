#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    bool correct = false;

    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;

    printf("Guess the number between 1 and 100 \n");

    while (!correct) {
        int guess;
        scanf("%i", &guess);

        if (guess == randomNumber) {
            correct = true;
        } else if (guess < randomNumber) {
            printf("Higher! \n");
        } else {
            printf("Lower! \n");
        }
    }

    printf("Correct, you won!");

    return 0;
}
