/*Write a program to print the following outputs using for loops.
a).
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
b).
* * * * * *
    * * * *
      * * *
        * *
          *
    
*/


#include<stdio.h>
int main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

     int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf("00"); // Two spaces for each leading space
        }

        // Print asterisks
        for (int k = i; k <= rows; k++) {
            printf("* ");
        }

        printf("\n"); // Move to the next line
    }
    return 0;
}