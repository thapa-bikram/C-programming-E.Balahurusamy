/*Write a progam to print all integers that are not divisible by either 2 or 3 and lie between 1 and 100. Program should also account the number of such integers and print the result.*/
#include<stdio.h>
int main()
{
    int count =0 ;
    for(int i=0;i<=100;i++)
    {
        if(i % 2 !=0 || i%3 !=0)
        {
            printf("%d\t ",i);
            count++;
        }
    }
    printf("\nThe count of numbers that are not divisible by either 2 or 3 and lie between 1 and 100 are %d",count);
    return 0;
}