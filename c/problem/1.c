#include <stdio.h>

int main(void)
{
    float shorty, tally, tree, distance1, distance2;
    
    printf("write the height of shorty:\n");
    scanf("%f", &shorty);
    printf("write the height of tally:\n");
    scanf("%f", &tally);
    printf("write the distance between shorty and tally:\n");
    scanf("%f", &distance1);
    printf("write the distance between shorty and tree:\n");
    scanf("%f", &distance2);

    tree = shorty + (tally - shorty) / distance1 * (distance1 + distance2);
    printf("Height of tree is %fm\n", tree);

    return 1;
} 
