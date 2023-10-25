#include<stdio.h>
int main()
{
    int num;
    printf("\n\n\nPrime number checker\n\n");
    
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Enter a valid number\n");
    }
    else if(num == 1)
    {
        printf("Not prime\n");
    }
    else if(num%2 !=0 && num%3 !=0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    

    for(int i=0;i<100;i++)
    {
        if(i%2 !=0 && i%3 !=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}


