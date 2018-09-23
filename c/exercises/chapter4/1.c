#include <stdio.h>

int main(void)
{
    int table_size = 0;
    
    printf("Enter the dimension of the table (2<size<12): ");
    scanf("%d", &table_size);

    if(table_size < 2 || table_size > 12)
        printf("Please Enter a number between 2 and 12./n");

    for(int row = 0 ; row <= table_size; row++)
    {
        printf("\n");
        for(int col = 0; col <= table_size; col++)
        {
            if(row == 0)
            {
                if(col == 0)
                    printf("    ");
                else
                    printf("|%4d", col);
            }

            else
            {
               if(col == 0)
                  printf("%4d", col);
               else
                  printf("|%4d", row * col);
            }
        }

        if(row == 0)
        {
            printf("\n");
            for(int col = 0; col <= table_size; col++)
               printf("_____");
        }
    }

   printf("\n");

   return 0;
} 
