/*Write a program to compute the sum of the digits of a given integer numbers. */
#include<stdio.h>
int main()
{
    int number;
    int remainder,sum=0;
    printf("Enter a number\n");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder = number % 10;       // Get the last digit
        sum += remainder;  // Append it to the reversed number
        number = number / 10; 
    }
    printf("The sum of the digits is %d \n",sum);
    return 0;
}