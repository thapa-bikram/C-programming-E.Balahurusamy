#include<stdio.h>
int main()
{
    int n;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            /*if(j%5==1 || j%5==0)
            {
                printf("* ");
            }*/
            if(i==j || i+j==6)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
            printf("\n");
    }
}