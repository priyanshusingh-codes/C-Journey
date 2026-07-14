/*Print Grade of a student whose marks is inputted through keyboard according to
following rules: [CO2]
     Marks          Grade
90 to 100             O
80 to 89              E
70 to 79              A
60 to 69              B
50 to 59              C
40 to 49              D
0 to 39               F

 Using if-else statement

*/



#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid Marks");
    else if (marks >= 90)
        printf("Grade = O");
    else if (marks >= 80)
        printf("Grade = E");
    else if (marks >= 70)
        printf("Grade = A");
    else if (marks >= 60)
        printf("Grade = B");
    else if (marks >= 50)
        printf("Grade = C");
    else if (marks >= 40)
        printf("Grade = D");
    else
        printf("Grade = F");

    return 0;
}

