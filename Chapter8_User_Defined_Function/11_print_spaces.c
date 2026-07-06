//Program to print spaces between two numbers using a function
#include<stdio.h>

//function to print spaces
void space(int x)
{
    int i;
    for(i=1; i <=x; i++)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    printf("Enter the number of spaces");
    scanf("%d", &n);
    printf("100");
    space(n);
    printf("200\n");
    return 0;
}