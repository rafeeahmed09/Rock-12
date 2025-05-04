#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{    int random, guess;
    int no_of_guesses = 0;
    srand(time(NULL));
    printf("welcome to the number guessing game\n");
    
    random = rand() % 100 + 1; // random numner between 1 to 100
    //  printf("random number (for testing): %d\n", random); // foe testing purpose on LY
    do
    {

        printf("\n enter your guess betwwen  1 to 100 :");
        scanf("%d", &guess);
        no_of_guesses++;
         if (guess < random){
         printf("Guess a larger number .\n");}
         else if (guess > random)
         {
            printf("Guess a smaller number .\n");

         }
         else{
            printf("congratulatios !!! you have guessed successfully guessed the number in %d attempts", no_of_guesses);
         }
    } while (random != guess);
    
      printf("\n bye bye , Thanks for playing.\n");
      printf("\n Deveploped by : Rafee ahmed");

}    
