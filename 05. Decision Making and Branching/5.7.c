/*Shown below is a Floyd's Triangle.
1
2 3
4 5 6
7 8 9 10
11 .. .. 15
.
.
.
79 .. .. .. .. .. 91

a).Write a program to print this Triangle
b).Modify the program to produce following form of program 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
    int i,j;
    int n;
    int num=1;
    printf("Enter the value of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//row
    {

        for(j=1;j<=i;j++)
        {
        printf("%d\t",num);
        num++;
        }
        printf("\n");
       
    }
     printf("\n");
        printf("\n");
         printf("\n");
        printf("\n");

    for(i=1;i<=n;i++)//row
    {

        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("1\t");
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
    



}