#include <stdio.h>

int main(void)
{
    int distance = 0;
    printf("Enter the distance in inches:");
    scanf("%d", &distance);

    printf("The distance is %d yard%s, %d feet%s, %d inch%s.\n", 
               distance / 36,
               distance / 36 == 1 || distance / 36 == 0 ? "" :"s",
               distance / 12 % 3,
               distance / 12 % 3 == 1 || distance / 12 % 3 == 0 ? "" : "s",
               distance % 12,
               distance % 12 == 1 || distance % 12 == 0 ? "" : "es");

    return 0;
}
