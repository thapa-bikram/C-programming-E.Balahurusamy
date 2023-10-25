/*The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
factorial m = m! = m x (m-1) x ..... x 1.
Write a program that computes and prints a table of factorials for any given m.
*/

#include<stdio.h>
int main()
{
    int number;
    int result;
    int fact=1;
    printf("Enter a number\n");
    scanf("%d",&number);
    while(number != 0)
    {
        fact *= number;
        number--;  
    }
    printf("the factorial is %d",fact);
    return 0;
}