/*Write a program to print a table of sin and cos functions for the interval from 0 to 180 degree 
in increments of 15 as shown here.
x (degree)              sin (x)             cos(x)
0
15
...
...
180           
*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int degree= 0;
    printf("X (degree)\t\t\t\tsin (x)\t\t\t\tcos (x)\t\t\t\t\n");
    while(degree <=180)
    {
        double radians = degree * (pi / 180);
        printf("%d\t\t\t\t%0.2f\t\t\t\t%0.2f\n",degree,sin(radians),cos(radians));
        degree += 15;
    }
    return 0;
}