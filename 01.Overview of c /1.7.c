/*Given two integers 20 and 10 , write a program that uses a function add() 
to add these two numbers and sub() to find the difference of these two numbers 
and then display the sum and difference in the following form:
20+10=30
20-10=10
*/

#include<stdio.h>
void add(num1,num2)
{
    printf("the sum is %i\n",num1+num2);
}
void sub(num1,num2)
{
    printf("the difference is %d\n",num1-num2);
}
int main ()
{
    int integer1=20 , integer2=10;
    add(integer1,integer2);
    sub(integer1,integer2);
    return 0;
}
