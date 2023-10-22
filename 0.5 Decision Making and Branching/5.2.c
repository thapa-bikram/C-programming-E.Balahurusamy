/*Write a program to find the number of and sum of all integers greater than 100 and 
less than 200 that are divisible by 7.*/

#include<stdio.h>
int main()
{
    int count=0;
    int sum=0;
    int i=101;
    //using while loop 
    while(i>100 && i<200)
    {

        if(i%7==0)
        {
            sum+=i;
            count ++;

        }
        i++;
    }
    printf("The number of integers greater than 100 and less than 200 that are divisible by 7 is %d\n",count);
    printf("The sum of these values = %d\n",sum);
    count = 0;
    sum = 0;
    //using for loop.
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            sum += i;
            count++;
        }
    }

    printf("The number of integers greater than 100 and less than 200 that are divisible by 7 is %d\n", count);
    printf("The sum of these values = %d\n", sum);

    return 0;
}