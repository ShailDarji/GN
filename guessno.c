#include <stdio.h>
// LIBRARIES TO SELECT RANDOM NUMBER
#include <stdlib.h>
#include <Time.h>

int main()
{
    int numberofguess;
    int guess;

    // TO GENRATE THE RANDOM NUMBER
    time_t t;
    srand((unsigned)time(&t));
    int RanNum = rand() % 21;
    // MAIN CODING
    printf("This is number gussing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    
    for(numberofguess = 5 ; numberofguess > 0 ;--numberofguess)
    {
        printf("You have %d tries left \n", numberofguess);
        printf("Enter A Guess \n");
        scanf("%d",&guess);
        
        if(guess==RanNum)
        {
            printf("Congratulations! You Guessed it \n.");
        }
        else if(guess < 0 || guess > 20)
        {
            printf("I said number is between 0 and 20 \n");
        }
        else if(RanNum > guess)
        {
            printf("Sorry, %d is wrong. My number is less than this \n",guess);
        }
        else if(RanNum < guess)
        {
            printf("Sorry, %d is wrong. My number is greater than this \n ",guess);
        }
    }
    printf ("You have failed to guess and your 5 guesses are finished \n");
    printf("The Correct guess is %d \n",RanNum);
    return 0;
}
