/*Write a program that determines whether a given integer is odd or even and displays
the number and description on the same line.*/

#include<stdio.h>
int main()
{
    int number=0;
    while(1)
    {
    printf("Enter a number \t:");
    scanf("%d",&number);
    printf("-------------------------------\n");
    printf("Number\t\t\tResult\n");
    printf("-------------------------------\n");
    if(number%2 == 0)
    {
        printf("%i \t\t\tEven \n",number);
    }
    else
    {
        printf("%i \t\t\tOdd \n",number);
    }
    }
    return 0;
}