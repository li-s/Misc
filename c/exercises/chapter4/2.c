#include <stdio.h>
#include <ctype.h>

int main(void)
{
    for(int character = 0; character <= 127; character++)
    {
        if(character % 2 ==0)
            printf("\n");
        printf("%4d %4c", character, isgraph(character) ? character : ' ');
    }

    printf("\n");

    return 0;
}
