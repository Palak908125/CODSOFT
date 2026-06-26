#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    // Generate random number
    srand(time(0));
    number = rand() % 100 + 1;   // Random number between 1 and 100

    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess < number)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number.\n");
            printf("You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}