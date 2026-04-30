/*
Write a program to output the following multiplication
table:
5x1=5
5x2=10
...
...
...
5x10=50
*/
#include <stdio.h>
int main ()
{
    int n=20;
    int i;
    for(int i=1;i<=n;i++)//For loop
    {
      printf("5x%d=%d\n",i,5*i);
    }
    return 0;

}