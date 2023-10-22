/*Write a program to read the values of x and y and print the results of the following expressions in one line.
a).(x+y)/(x-y)  b).(x+y)/2  c).(x+y)(x-y)
*/

#include<stdio.h>
int main()
{
    float x,y ;
    float result1, result2,result3;
    printf("Enter the values of x and y\n");
    scanf("%f%f",&x,&y);
    result1 = (x+y)/(x-y);
    result2 = (x+y)/2;
    result3 = (x+y)*(x-y);
    printf("(x+y)/(x-y)\t (x+y)/2\t (x+y)(x-y)\n");
    printf("%f\t %f\t %f\n",result1, result2, result3);
    return 0;


}