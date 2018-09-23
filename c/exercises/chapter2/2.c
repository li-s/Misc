#include <stdio.h>

int main(void)
{
    float width = 0;
    float length = 0;
    
    printf("Please enter the with and length of the room below in centimeters, seperated by a space. Hit enter when done.\nDimentions:");
    scanf("%f %f", &width, &length);
    printf("The are of the room is %.2f meters square\n", 
                                        (width / 100) * (length / 100));

    return 0;
}
