#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
     bool correct = true;
     char another_game = 'Y';                // Check if another game is to
                                             // be played

     unsigned int digits = 1;                // Number of digits to guess
     unsigned int tries = 3;
     time_t seed = 0;
     unsigned int number = 0;                // Stores input

     do
     {
         /*for(int count = 1; count <= digits; ++count)
         {
             printf("Hello world");
             continue;
          }*/
         printf("\nContinue the game?(y/n)\n");
         scanf("\n%c\n", &another_game);
     }while(toupper(another_game) == 'Y');

     return 0;
}
