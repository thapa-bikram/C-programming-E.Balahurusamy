/*Write a program to read the following numbers, round them off to the nearest integers 
and print out the result in integer form:
35.7    50.21   -23.73  46.45
 */
#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,num3,num4;
    num1= 35.7;
    num2=50.21;
    num3=-23.73;
    num4=-46.45;
    if(num1-floor(num1)<fabs(num1-ceil(num1)))
    {
        printf("Rounding off %.2f to nearest integer , we get = %.2f\n", num1,floor(num1));
    }
    else{
        printf("Rounding off %.2f to nearest integer , we get = %.2f\n", num1,ceil(num1));
    }
    return 0;
}