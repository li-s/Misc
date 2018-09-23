#include <stdio.h>
#include <math.h>

int main(void)
{
    float weeklypay = 0;
    float hours = 0;
    float pay_hour = 0;

    printf("Enter your weekly pay below up to 2 decimal places, followed by the number of hours you work in a week, seperated by a space. Press enter when done.\n");
    scanf("%f %f", &weeklypay, &hours);

    printf("Your average hourly pay rate is %.f dollar%s and %.f cents\n",
                    trunc(weeklypay / hours),
                    weeklypay / hours == 1 ? "" : "s",
                    (weeklypay / hours - (int)(weeklypay / hours)) * 100);

    return 0;
}
