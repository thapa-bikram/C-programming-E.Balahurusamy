/*
Write a program to compute and display the sum of all integers that are divisible by 6
but not divisible by 4 and lie between 0 and 100. The program should also count and display
the number of such values.
*/
#include<stdio.h>
int main()
{
    int count=0;
    int sum=0;
    printf("The list of those numbers:  that are divisible by 6 but not divisible by 4 and lie between 0 and 100.\n");
    for(int i=0;i<100;i++)
    {
        if(i % 6 == 0 && i % 4 !=0 )
        {
            printf("%d ",i);
            sum=sum+i;
            count++;
        }
        
    }

    printf("\nThe sum of these numbers = %d\n",sum);
    printf("There are = %d numbers in total.\n",count);
    return 0;

}