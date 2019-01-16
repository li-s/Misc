#include <stdio.h>

int main()
{
    int player = 0;
    int winner = 0;
    int choice = 0;
    int column = 0;
    int row = 0;
    
    char board[3][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    for(int turn = 0; turn < 9 && winner == 0; ++turn)
    {
        //prints the grid
        printf("\n");
        printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("---+---+---\n");
        printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("---+---+---\n");
        printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

        player = turn%2 + 1;

        //prompts and check for valid choice by player
        do
        {
            printf("Plyaer %d, please input a valid square number which you choose to place your symbol.\n", player);
            scanf("%d", &choice);

            row = --choice / 3;
            column = choice % 3;

        }while(choice < 0 || choice > 8 || board[row][column] > '9');
        
        //replace the element in the array by the player symbol
        board[row][column] = (player == 1) ? 'X' : 'O';

        //check if anyone win
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
           board[0][2] == board[1][1] && board[0][2] == board[2][0])
            winner = player; 

        else
        {
            for(int line = 0 ; line <= 2 ; ++line)
            {
                if(board[line][0] == board[line][1] && 
                   board[line][0] == board[line][2] ||
                   board[0][line] == board[1][line] &&
                   board[0][line] == board[2][line])
                    winner = player;
            }
        }
    }
    
    //display the winner
    if(winner)
    {
        printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("---+---+---\n");
        printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("---+---+---\n");
        printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        printf("The winner is Player %d!\n", winner);
    }
    else
        printf("It's a tie! Better luck next time.\n");

    return 0;
}
