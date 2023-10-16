/*Write a program that requests two floating point numbers from the user and then divide the first number by the second 
and displays the result along with the numbers.*/

#include<stdio.h>
int main()
{
    float num1, num2;
    float div;
    printf("Enter two floating point numbers\n");
    scanf("%f%f",&num1,&num2);
    div=num1/num2;
    printf("%f/%f\n = %f\n",num1,num2,div);
    return 0;

    
}