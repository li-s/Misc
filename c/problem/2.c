#include <stdio.h>

int main(void)
{
    double number1 = 0;
    double number2 = 0;
    char operand = 0;
    double answer = 0;

    printf("Enter the calculation");
    scanf("%lf %c %lf", &number1, &operand, &number2);

    printf("%c", operand);

    switch(operand)
    {
        case '+':
            answer = number1 + number2;
            break;
        case '-':
            answer = number1 - number2;
            break;
        case '*':
            answer = number1 * number2;
            break;
        case '/':
            if(number2 == 0)
                printf("\nCannot divide by zero");
            else
                answer = number1 / number2;
            break;
        default:
            printf("\n\nIllegal operand\n\n");
    }

    printf("\nYour answer is %lf\n", answer);

    return 0;
}
