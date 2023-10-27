/*Write a program to print a values of the function.
y= exp(-x)
for x varying from 0.0 to 10.0 in steps of 0.10 . The table should appear as follows:

                    Table for Y= EXP(-X)
    ---------------------------------------------------------------
        x       0.1     0.2     0.3     0.4     ........        0.9     
    ---------------------------------------------------------------
        0.0
        1.0
        2.0
        3.0
        .
        .
        .
        9.0
    ----------------------------------------------------------------

*/
#include<stdio.h>
#include<math.h>
int main()
{
    double y;
    for(int i=0;i<75;i++)
    {
        printf("-");
    }
    printf("|");
    printf("\n");
    printf("|x");
    for(float j=0.1;j<1;j+=0.1)
    {
        printf("\t%2.1f",j);
    }
    printf("|\n");
    for(int i=0;i<75;i++)
    {
        printf("-");
    }

    for(float i=0;i<=9;i++)
    {
        printf("|\n%2.1f",i);
        for(float j=0.1;j<1;j+=0.1)
    {
        y=exp(-j);
        printf("\t%2.1lf",y);
    }
    }
    printf("|");
    printf("\n");
    for(int i=0;i<75;i++)
    {
        printf("-");
    }
    printf("|");
    
}