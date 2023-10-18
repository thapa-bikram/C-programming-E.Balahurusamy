/*Write a program to read a four digit integer and print the sum of it's digits.
HInt : USe / and % operators.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int number;
    int count=3;
    int sum=0;
    int digit=0;
    printf("Enter a number.\n");
    scanf("%d",&number);
    while(count> -1)
    {
        digit=number/pow(10,count);
        number = number%(int)pow(10,count);
        sum += digit;
        count-- ;
        

    }
    printf("%d\n",sum);
    return 0;
}