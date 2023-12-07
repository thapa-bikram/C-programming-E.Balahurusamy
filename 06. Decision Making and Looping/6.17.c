/*Write a program to graph the function
y=sin(x) in the interval 0 to 180 degrees in step of 15 degrees . Use the concepts discussed in the case sudy 4 in Chapter 6.*/

#include<stdio.h>
#include<math.h>
int main()
{
    float y=0.00;
    int x=180;
    for(int i=13;i>0;i--)
    {
       
        printf("|");
         for(int j=i;j>1;j--)
        {
            printf("\t- ");
            
        }
       
        y=sin(x);
        x-=15;
        printf("\t[%2.3f] \n",y);
    }
     printf("0 -----------------------------------------\n");
    printf("\t\t\t\t Y -->                     \n");
    return 0;
}