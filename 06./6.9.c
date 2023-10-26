/*Rewrite the program of case study 6.4 (plotting of two curves) using else...if constructs
instead of continue statements.

We have two function of the type
y1= exp(-ax)
y2= exp(-ax^2/2)
Plot the graph of these functions for x varying from 0 to 5.0.

Problem Analysis: Initially when x=0, y1=y2=a and the graphs start from the same point. The
curves cross when they are again equal at x==2.0. The program should have appropriate branch 
statements to point the graph points at the following three conditions:
1.y1>y2
2.y1<y2
3.y1=y2
The function y1 and y2 are normalized and converted to integers as follows:
y1=50exp(-ax)+0.5
y2=50exp(-ax^2/2)+0.5
 */
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float a,x,y1,y2;
    a=0.4;
    printf("        Y------->     \n");
    printf("0-------------------------------------------------------------------------\n");
    for(x=0;x<5;x+=0.25)
    {
        //Evaluation of function
        y1=(int)(50*exp(-a*x)+0.5);
        y2=(int)(50*exp(-a*pow(x,2)/2)+0.5);
        //Plotting when y1=y2
        if(y1==y2)
        {
            if(x==2.5)
            {
                printf("X |");
            }
            else
            {
                printf("|");
            }
            for(i=1;i<=y1-1;++i)
            {
                printf("");
                printf("\n");
                continue;
            }
        }
        //Plotting when y1>y2
        else if(y1>y2)
        {
            if(x==2.5)
            {
                printf(" X |");
            }
            else
            {
                printf("  |");
            }
            for(i=1;i<=y2-1;++i)
            {
                printf("");
                printf("*");
            }
            for(i=1;i<=y1-y2-1;++i)
            {
                printf("-");
            }
            printf("0\n");
            continue;
        }

         //Plotting when y2>y1
        else
        {
            if(x==2.5)
            {
                printf(" X |");
            }
            else
            {
                printf("  |");
            }
            for(i=1;i<=y1-1;++i)
            {
                printf("");
            }
            printf("0");
            for(i=1;i<=y2-y1-1;++i)
            {
                printf("-");
            }
            printf("*\n");
            continue;
        }
    }
        printf(" |n");
        return 0;

        
    }

