#include <stdio.h>
#include <ctype.h>

int main(void)
{
    for(int character = 0; character <= 127; character++)
    {
        if(character % 2 ==0)
            printf("\n");
        printf("  %4d", character);
        if(isgraph(character))
            printf("  %4c", character);

        else
            switch(character)
            {
                case '\n':
                    printf("newline");
                    break;
                case ' ':
                    printf("    space");
                    break;
                case '\t':
                    printf("horizontal tab");
                    break;
                case '\v':
                    printf("vertical tab");
                    break;
                case '\f':
                    printf("form feed");
                    break;
               default:
                    printf("      ");
                    break;
            }

    }

    printf("\n");

    return 0;
}
