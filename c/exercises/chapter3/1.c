#include <stdio.h>

int main(void)
{
    char choice = 0;
    float celsius = 0;
    float fahrenheit = 0;

    printf("If you want to convert celsius to fahrenheit, press 1.\n"
            "If you want to convert fahrenheit to celsius, press 2.\n");
    scanf("%c", &choice);

    switch(choice)
    {
        case '1' :
            printf("Enter the temperature in celsius: ");
            scanf("%f", &celsius);
            printf("The temperature is %.2f fahrenheit.\n", 
                                             celsius * 1.8 + 32);
            break;

        case '2' :
            printf("Enter the temperature in fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("The temperature is %.2f celsius.\n",
                                             (fahrenheit - 32) * 5 / 9); 
            break;

        default:
            printf("Please enter either 1 or 2.\n");
    }

    return 0;
}
