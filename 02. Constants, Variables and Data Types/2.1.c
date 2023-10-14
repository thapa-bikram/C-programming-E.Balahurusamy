/*Write a program to determine and print the sum of the following harmonic series for a given value of n :
1+1/2+1/3+....+1/n
*/
#include<stdio.h>
int main()
{
    int n ;
    float count = 1;
    float sum = 0 ;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(count<=n)
    {
        sum=sum+(1/count);
        
        count++;
    }
     printf("The sum of the harmonic series : 1+1/2+1/3+...+1/n is %5.2f\n", sum);

    
    return 0;
}