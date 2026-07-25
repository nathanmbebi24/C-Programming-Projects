#include <stdio.h>

int main() {

    int secret = 7;
    int guess;

    while(guess != secret)
    {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Congratulations! You guessed correctly.\n");
        }
        else
        {
            printf("Try again.\n");
        }
    }

    return 0;
}