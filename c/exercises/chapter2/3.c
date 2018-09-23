#include <stdio.h>

int main(void)
{
    int product1 = 0;
    int product2 = 0;
    float price1= 3.5;
    float price2 = 5.5;

    printf("How much of product 1 ($3.50) do you wish to buy?\n");
    scanf("%d", &product1);
    printf("How much of product 2 ($3.50) do you wish to buy?\n");
    scanf("%d", &product2);
    
    printf("The total price is %.2f dollars\n", product1 * price1 + product2 * price2);

}
