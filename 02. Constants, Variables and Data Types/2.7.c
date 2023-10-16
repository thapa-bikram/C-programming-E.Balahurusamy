/*
Write a program to do the following:
a). Declare x and y as integer variables and z as a short integer variable.
b).Assign two 6 digit numbers to x and y 
c).Assign the sum of x and y to z
d).Output the values of x,y and z.
    Comment on the output.
*/

#include<stdio.h>
int main()
{
    int x,y;
    short int z;
    x=100000;
    y=200000;
    z=x+y;
    printf("x= %i & y= %i \n z=x+y= %hd\n",x,y,z);/*the result of the addition exceeds the range of a short int, resulting in overflow.*/
    return 0;
}