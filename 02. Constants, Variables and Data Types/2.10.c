/* Write a program to illustrate the use of symbolic constants in a real life application.
*/
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float radius;
    printf("Program to calculate the area of a circle\n");
    printf("Enter the value of radius\n");
    scanf("%f",&radius);
    printf("The ares of circle is %f \n", pi*pow(2,radius));
    return 0;

}