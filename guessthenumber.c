#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   printf("Welcome to the Number Guessing Game\nWritten in C\nDeveloper: Hunter A. McCabe\n");
   int guess;
   int numOfGuesses = 1;
   time_t t;
   /* Intializes random number generator */
   srand((unsigned) time(&t));
   int num = rand() % 50;
   int play = 1;
   while (play == 1)
   {
      printf("What is your guess? ");
      scanf("%d", &guess);
      if (guess == num)
      {
         printf("You win!\nIt took you %d guesses\n", numOfGuesses);
         play = 0;
         break;
      }
      else if (guess < num)
      {
         printf("Your guess is too low\n");
         numOfGuesses++;
      }
      else
      {
         printf("Your guess is too high\n");
         numOfGuesses++;
      }
   }
   
   return(0);
}

