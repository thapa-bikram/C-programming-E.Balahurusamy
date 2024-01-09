#include<stdio.h>
int main()
{
    
    int num;
    int p=0;
    printf("Enter total number of voters\n");
    scanf("%d",&num);
    int count[num];
    printf("Enter 1 to vote 1st candidate\nEnter 2 to vote 2nd candidate\nEnter 3 to vote 3rd candidate\nEnter 4 to vote 4th candidate\nEnter 5 to vote 5th candidate\n");
    for(int i=0;i<num;i++)
    {  
        printf("%i). Enter your vote\t",i+1);
        scanf("%d",&count[i]);
    }
    printf("Total votes :");
    for(int i=0;i<5;i++)
    {
        if(count[i]%5==1)
        else if(count[i]/5==)
    }
    return 0;
}