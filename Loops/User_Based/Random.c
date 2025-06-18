// Guessing Game : Generating a random number between 1 to 100 and let the user guess it until they get it right

#include<stdio.h>
#include<stdlib.h>   // For rand(),srand()
#include<time.h>    //For time()

int main()
 {
    int random,guess,difference;
    srand(time(NULL));               //the random numbers will be different everytime you run the program
    random = (rand() % 100) +1 ;    //Limit : 1 to 100

    printf("Welcome to the Guessing Game !\n");

       while(1){
        printf("Enter a random number between 1 to 100 :");
        scanf("%d",&guess);

        if  (guess<1 || guess>100) {
            printf("Invalid !\n");
            continue;
        } else  if(guess == random){
            printf("Yeah ! You guessed it right buddy :)");
            break;
        }

        difference = guess>random?guess-random:random-guess;

         if(difference<=5){
             printf("You are too close !\n");
         } else if(difference<=10){
             printf("You are close !\n");
         } else if (guess > random){
            printf("Try a lower number \n");
        }else {
        printf("Try a higher number \n");
       }
     }
}

