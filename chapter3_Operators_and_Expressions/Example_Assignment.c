//Print Sequence of Squares bof numbers
/*
Use a = a*a => a*= a
*/

#include<stdio.h>

#define N 300
#define A 2

int main ()
{
int a;
a = A;
while(a<N)
{
    printf("%d\n", a);
    a *= a;
}
return 0;
}