/*The numbers in the sequence 1 1 2 3 5 8 13 21 are called Fibonacci numbers. 
Write a program using 
do...while loop to calculate and print the first m Fibonacci Numbers.
Hint : After the first two numbers in the series, each number is the sum of two preceding numbers.
*/

#include<stdio.h>
int main()
{
    int i=1,n,f,f1,f2;
    printf("Enter Number of Fibonacci Values Needed : ");
    scanf("%d",&n);
    f=0;
    f1=1;
    f2=1;
    do
    {
        i++;
        printf("%d\n",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    while(i<=n);
    return 0;
}

