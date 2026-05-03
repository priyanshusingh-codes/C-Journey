#include <stdio.h>

int main()
{
    printf("Roll   Name       Marks\n");
    printf("----------------------\n");
    printf("%-5d %-10s %5.2f\n", 1, "Raj", 91.25);
    printf("%-5d %-10s %5.2f\n", 2, "Priyanshu", 95.75);

    return 0;
}