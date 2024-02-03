#include<stdio.h>
int main()
{
    int num[10];
    int sum=0;
    printf("Enter ten two digit numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        printf("num[%d]= %d\t",i,num[i]);
         printf("Count %d\n",i);
        if(num[i] >= 10 && num[i] <= 99 || num[i] <= -10 && num[i] >=-99 )
        {
            printf("Enter another number\n");
            if(num>0)
            {
                sum += num[i];
                if(sum>999)
                {
                    break;
                }
            }
        }
         else
        {
            printf("Enter a valid number\n");
            i--;
        }
    }
    printf("The sum of all the positive numbers from the list is %d\n",sum);
    printf("The list of positive numbers used in addition are as follows\n");
    for(int i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            printf("%d\t",num[i]);
        }
        
    }
    return 0;
}