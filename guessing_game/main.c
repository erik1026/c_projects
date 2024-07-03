#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Generates a random number in range [lower, upper]
    If lower is less than 0 then lower is set to 0
*/
int generate_random_num(int lower, int upper){

    if (lower < 0){
        lower = 0;
    }
    return (rand() % (upper - lower + 1)) + lower;

}

int main(){
    srand(time(0));

    int lower, upper, randomNum, count, guess;
    count = 0;

    printf("Welcome to the guessing game. You get 3 attempts to guess the correct number.\n");
    printf("Enter the lower and upper range: ");
    scanf(" %d %d", &lower, &upper);

    randomNum = generate_random_num(lower, upper);
    while(count < 3){
        printf("Your guess: ");
        scanf(" %d", &guess);

        if(guess == randomNum){
            printf("Correct!!\n");
            break;
        }

        if (guess < randomNum){
            printf("Too low...\n");
        } else if (guess > randomNum){
            printf("Too high...\n");
        }
        
        count++;
    }

    if (count >= 3 ){
        printf("Game over...\n");
    }

    return 0;
}