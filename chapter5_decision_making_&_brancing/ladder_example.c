//Electricity Bill
#include <stdio.h>

int main()
{
    int units;
    float bill;

    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = units * 2.0;
    else
        bill = units * 3.0;

    printf("Bill = %.2f", bill);

    return 0;
}