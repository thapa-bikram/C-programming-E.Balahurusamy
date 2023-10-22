/*Write a program to determine whether a given number is 'odd' or 'even' and print the message
NUMBER IS EVEN.
or NUMBER IS ODD.
a).without using else option
and
b).with else option.
*/

#include<stdio.h>
int main()
{
    int number; 
    printf("Enter a number\n");
    scanf("%d",&number);
    //without using else option.
    if(number%2 == 0)
    {
        printf("Number is even\n");
    }
    if(number%2 !=0)
    {
        printf("Number is odd\n");
    }
    //with using else option 
    if(number%2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
    
}