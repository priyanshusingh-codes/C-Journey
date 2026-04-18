//Program  to show typical data declarations, assignments and values stored in various types of variable

#include <stdio.h>
int  main()
{
    //Declerations
    float x,p;
    double y,q;
    unsigned k;
//Declarations and assignments
int m = 54321;
long int n = 1234567890;
//Assignments
x = 1.234567890000;
y = 9.876543211;
k = 54321;
p = q = 1.0;
//Printing
printf ("m = %d\n", m);
printf ("n = %ld\n", n);
printf ("x =  %.12f\n", x);
printf ("x = %f\n", x);
printf ("y =  %.12f\n", y);
printf ("y =  %lf", y);
printf ("k = %u p = %f q = %.121lf\n", k, p, q);
return 0;
}
