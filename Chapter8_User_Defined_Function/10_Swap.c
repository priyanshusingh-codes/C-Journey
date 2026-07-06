//Program to interchange two global variables using a function
#include<stdio.h>
int x,y;
void exchange()
{
    int temp;//temporary varible for swapping
    temp = x;//store x in tem
    x = y;//copy y to x
    y = temp; // copy temp to y
}
int main()
{
    printf("Enter values of x and y:");
    scanf("%d %d", &x, &y);
    printf("x = %d\n", x);
    printf("%d", y);

    //call of exchange function
    exchange();

    printf("\nAfter exchanging:\n");
    printf("x = %d\n", x);
    printf("y =%d\n", y);
    return 0;
}