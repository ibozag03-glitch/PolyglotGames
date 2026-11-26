#include <stdio.h>

int main(void)
{

    printf("\nGuess the Number !\n");

    int secret = 20;
    int guess;
    char answer;
    int attempt = 6;

    while (answer != 'n' && attempt != 0) {
        printf("\nattempt left %i\n", attempt);

        printf("\nChoose a number beteewn 1 and 100: ");
        scanf("%i", &guess);

        printf("You choosed %i\n", guess);
        printf("The secret number was: %i\n", secret);
        attempt--;

        if (guess == secret) {
            printf("attempt left %i\n", attempt);
            printf("\nGood Job You Found it !\n");
            break;
        }

        if (attempt == 0) {
            printf("\nDo you want to restart ? (y/n): ");
            scanf(" %c", &answer);
            if (answer == 'y' || answer == 'Y') {
                attempt = 6;
                continue;
            }
        }

        if (answer == 'n' || answer == 'N') {
            printf("GOOD BYE !");
            break;
        }
    }

    return 0;
}