#include<stdio.h>
int main()
{
    int i ;
    float x[10],value,total=0.0;
    printf("Enter 10 real numbers \n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        total = total +x[i]*x[i];
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("x[%d]=%5.3f\n",i+1,x[i]);
    }
    printf("\ntotal = %.2f\n",total);
}