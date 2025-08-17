#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    //printf("Random number between 1 and 100: %d\n", randomNumber);
    int no_of_guesses= 0;
    int guessed;
    do{

        printf("guess any numberbet ween 1 to 100 :");
        scanf("%d",&guessed);
        no_of_guesses++;
        if(guessed<randomNumber){printf("your guess is smaller then the number\n");}
        if(guessed>randomNumber){printf("your guess is larger then the number\n");}


    }while(guessed!=randomNumber);
    printf("congratulation your guess was right the number is %d \n",randomNumber);
    printf("number of guesses took were:%d",no_of_guesses);

    return 0;


}