/*Write a program to evaluate the following investment equation V=P(1+r)^n and print the tables
which would give the value of V for various combinations of the following values of P,r, and n.

P: 1000,2000,3000,.....,10000
r:0.10,0.11,0.12,.......,0.20
n:1,2,3,....,10
(Hint: P is the principal amount and v is the value at the end of the n years . 
This equation can be recursively written as)

V=P(1+r)
P=V
This is, the value of money at the end of first year becomes the principal amount fot the next 
year and so on .
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float rate= 0.10;
    int numOfYears=1;
    float value=0;
    float principal=1000;
    printf("---------------------------------------------------------------\n");
    printf(" Principal \t Rate \t\t Number of \t Value at the\n");
    printf(" \t\t\t\t  years \t end of year\n");
    printf("---------------------------------------------------------------\n");
    for(int i=1;i<=10;i+=1)
    {
        printf("%7.2f",principal);
        rate += 0.1;
        printf("%16.2f",rate);
        printf("%16d",numOfYears);
        numOfYears += 1;
        value=principal*pow((1+rate),numOfYears);
        printf("%21.2f\n",value);
        principal= value;





        
    }
    printf("---------------------------------------------------------------\n");

}