/*Write a program for fitting a staight line through a set of points (xi,yi),
i = 1,....,n.
The straighht line equation is : y=mx+c and the values of m and c are given by 

m=(n*Summation(x1,yi)-(Summation x1)(Summation yi))/n*(Summation xi^2)-(Summation xi)^2 .

c=1/n(Summation yi - m Summation xi)

All summtaions are from 1 to n.

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int c;
    printf("Enter the total number of points\n");
    scanf("%d",&num);
    int x[num],y[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter the value of %i coordinate : \t",i);
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    int sumY;
    int m,q;
    int sumX1=0;
    for(int i=0;i<num;i++)
    {
        sumX1 += x[1];
    }
    for(int i=0;i<num;i++)
    {
        sumY=y[i];
    }
    for(int i=0;i<num;i++)
    {
        q=(x[1]*y[i]);
    }
    sumY*=sumX1;
    q*=num;
    int sq=0;
    for(int i=0;i<num;i++)
    {
        sq+=(x[i]*x[i]);
    }
    sq*=num;
    int sq1=0;
    for(int i=0;i<num;i++)
    {
        sq1+=x[i];
    }
    sq1*=sq1;
    int sq2=0;
    for(int i=0;i<num;i++)
    {
        sq2+=x[i];
    }

    m=(q-sumY)/sq-sq1;
    c=1/num;
    c*=(sumY-m*sq1);

    printf("The equation of the given line is y= %d x + %d",m,c);
    return 0;
    
}