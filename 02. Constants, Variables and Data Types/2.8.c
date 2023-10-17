/*Write a program to read two floating point numbers
using a scanf statement, assign their sum 
to an integer variable and then 
output the values of all the three
variables.*/

#include<stdio.h>
int main()
{
    float num1, num2;
    int num3;
    printf("Enter the value of two floating point numbers.\n");
    scanf("%f%f",&num1,&num2);
    int sum = (int) num1+num2;
    printf("The supplied values are: %f and %f , \nThe sum of these two values is %i\n",num1,num2,num3);
    return 0;

}