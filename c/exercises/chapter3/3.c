#include <stdio.h>

int main(void)
{
    int quantity = 0;
    float price = 5;

    printf("Enter the amount you wish to purchase: ");
    scanf("%d", &quantity);

    printf("The price is $");
    if(quantity <= 30)
        printf("%.2f.\n", quantity * price);
    else if(quantity <= 50)
        printf("%.2f.\n", quantity * price * 0.9);
    else
        printf("%.2f.\n", quantity * price * 0.85);

    return 0;
}
