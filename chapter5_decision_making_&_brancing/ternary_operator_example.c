#include <stdio.h>

int main()
{
    int age;

    scanf("%d", &age);

    (age >= 18) ? printf("Adult") : printf("Minor");

    return 0;
}