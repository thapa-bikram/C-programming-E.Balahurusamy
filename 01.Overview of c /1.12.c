/*Write a program to display the following simple arithmetic calculator
x=        .....             y=                 ....
sum=      .....             Difference=        ....
Product=  .....             Division=          ....


*/
#include<stdio.h>
int main()
{
    int x,y,sum,difference,product,division;
    printf("enter the value of x and y\n");
    scanf("%i%i",&x,&y);
    sum=x+y;
    difference=x-y;
    product=x*y;
    division=x/y;
    printf("x=\t\t %i\t",x);
    printf("y=\t\t %i\t\n",y);
    printf("Sum=\t\t %i\t",sum);
    printf("Difference=\t %i\t\n",difference);
     printf("Product=\t %i\t",product);
    printf("Division=\t %i\t\n",division);
    return 0;
}