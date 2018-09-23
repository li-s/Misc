#include <stdio.h>

int main(void)
{
    int day = 0;
    int month = 0;
    int year = 0;

    printf("Enter the date in the format dd mm yyyy: ");
    scanf("%d %d %d", &day, &month, &year);

    printf("The date is %d%s ", 
            day, 
            day > 3 ? "th" : day == 3 ? "rd" : day ==  2 ? "nd" : "st");
    switch(month)
    {
        case 1:
            printf("January");
            break;

        case 2:
            printf("Febuary");
            break;

        case 3:
            printf("March");
            break;

        case 4:
            printf("April");
            break;

        case 5:
            printf("May");
            break;

        case 6:
            printf("June");
            break;

        case 7:
            printf("July");
            break;

        case 8:
            printf("August");
            break;

        case 9:
            printf("September");
            break;

        case 10:
            printf("October");
            break;

        case 11:
            printf("November");
            break;

        case 12:
            printf("December");
            break;

        default:
            printf("\nEnter a valid month(1-12)!\n");
    }

    printf(" %d\n", year);

    return 0;
}
