/*Given three values, write a program to read three values from keyboard
and print out the largest of them without using if statement.*/
#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    int a;
    printf("Enter the values of 3 numbers.\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    a=(num1>num2) ? num1:num2;
    a=(a>num3) ? a:num3;
    printf("%d is the Greater among all\n",a);
    

}