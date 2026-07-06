//Sum of two numbers using function
#include<stdio.h>
int sum(int a, int b){
    int S = a + b;
    return S;
}
int main()
{
    int a,b;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);
    printf("Sum of a and b is %d", sum(a, b));
    return 0;
}