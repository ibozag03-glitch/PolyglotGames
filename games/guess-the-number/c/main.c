#include <stdio.h>

int main(void)
{

    printf("\nGuess the Number !\n");

    int secret = 20;
    int guess;
    char answer = 'y';
    int attempt = 6;

    while (answer != 'n' && attempt != 0)
    {
        printf("\nChoose a number beteewn 1 and 100: ");
        scanf("%i", &guess);

        printf("You choosed %i\n", guess);
        printf("The secret number was: %i\n", secret);

        attempt--;
        printf("\nattempt left %i\n", attempt);

        printf("\nChoose a number beteewn 1 and 100: ");
        scanf("%i", &guess);

        printf("You choosed %i\n", guess);
        printf("The secret number was: %i\n", secret);

        if (guess == secret)
        {
            attempt = 0;
            printf("attempt left %i\n", attempt);
            printf("\nGood Job You Found it !\n");
            break;
        }

        attempt--;
        printf("attempt left %i\n", attempt);
        printf("\nDo you want to restart ? (y/n): ");
        scanf(" %c", &answer);

        if (answer == 'n')
        {
            printf("GOOD BYE !");
            break;
        }

        if (attempt == 0)
        {
            printf("No more attempt left !\n");
            printf("\nGOOD BYE !");
            break;
        }
    }

    return 0;
}