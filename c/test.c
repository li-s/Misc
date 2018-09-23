#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char cont = 'Y';

    do
    {

        printf("\ncontinue?(y/n)\n");
        scanf("%c", &cont);
        printf("%d", toupper(cont));
    }while(toupper(cont) == 'Y');

    return 0;
}
