//Minnimum of two numbers using function
#include<stdio.h>
int min(int a, int b){
    if (a < b)
    {
        return a;
    }
        else
        {
            return b;
        }
    }
    int main()
   { 
int a,b;
        printf("Enter a and b\n");
        scanf("%d %d", &a, &b);
        printf("min of a and b is %d", min(a, b));
        return 0;
    }
