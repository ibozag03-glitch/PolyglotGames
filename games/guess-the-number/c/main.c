#include <stdio.h>

int main(void) {

    printf("\nGuess the Number !\n");
    
    int secret = 20;
    int guess;
    char answer;

    printf("\nChoose a number beteewn 1 and 100: ");
    scanf("%i", &guess);

    printf("You choosed %i\n", guess);
    printf("The secret number was: %i\n", secret);

    if (guess != secret) {
        printf("Wrong Choice.\n");
        printf("\nDo you want to restart ? (y/n): ");
        scanf(" %c", &answer);
    }

    if (answer != 'y') {
        printf("\nGood Bye !");
        return 0;
    }
    printf("\nYou choosed %c\n", answer);

    printf("\nChoose a number beteewn 1 and 100: ");
    scanf("%i", &guess);

    printf("You choosed %i\n", guess);
    printf("The secret number was: %i\n", secret);

    if (guess == secret) {
        printf("\nGood Job You Found it !\n");
    }
    
    return 0;
}