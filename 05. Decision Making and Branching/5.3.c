/*
A set of two linear equations with two unknowns x1 and x2 is given below:
ax1+bx2=m
cx1+dx2=n
The set has a unique solution

x1=(md-bn)/(ad-cb)
x2=(na-mc)/(ad-cb)
provided the denominator ad-cb is not equal to zero.

Write a program that will read the values of constants a,b,c,d,m and n and compute the values of
x1 and x2. An appropriate message should be printed if ad-cb = 0.
*/

#include<stdio.h>

int main()
{
    int a,b,c,d,m,n;
    float x1,x2;
    label:
    printf("Enter the values of a,b,c,d,m,n\n");
    printf("a:\n");
    scanf("%d", &a);
    printf("b:\n");
    scanf("%d", &b);
    printf("c:\n");
    scanf("%d", &c);
    printf("d:\n");
    scanf("%d", &d);
    printf("m:\n");
    scanf("%d", &m);
    printf("n:\n");
    scanf("%d", &n);
    if(a*d-c*d == 0)
    {
        printf("ad-cd = 0 , Re-enter values\n");
        goto label;

    }
    else if(a*d-c*d != 0)
    {
        x1=(m*d-b*n)/(a*d-c*b);
        x2=(n*a-m*c)/(a*d-c*b);
        printf("The value of x1 is : %f",x1);
        printf("The value of x2 is : %f",x2);
    }
    return 0;

}