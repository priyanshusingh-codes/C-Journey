//Convert a Given Number of Days into Months and Days
#include <stdio.h>

int main()
{
    int days, months, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remainingDays = days % 30;

    printf("%d days = %d month(s) and %d day(s)\n", days, months, remainingDays);

    return 0;
}