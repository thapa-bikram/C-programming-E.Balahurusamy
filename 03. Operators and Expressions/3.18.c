/*Write a program to compute the values of square-roots and squares of the numbers 0 to 100 
in steps 10 and print the output in a tabular form as shown below.

Number              Square-root             Square
0                   0                          0
100                 100                        10000
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int number=0;
    float sqRoot;
    double square;
    printf("   ---------------------------------------------------------------------------------------------\n");
    printf("\tNumber\t\t\t\tSquare-root\t\t\t\tSquare\t\n");
    printf("   ---------------------------------------------------------------------------------------------\n");
    while (number <=100)
    {
        printf("|\t%i\t\t\t\t%.4f\t\t\t\t\t%.0lf\t\t|\n",number,sqrt(number),pow(number,2));
        number += 10;
    }
    printf("   ---------------------------------------------------------------------------------------------\n");
    return 0;

}