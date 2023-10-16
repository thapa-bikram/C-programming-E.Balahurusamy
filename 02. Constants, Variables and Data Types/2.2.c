/*Write a program to read the prices of an item in decimal form (like 19.5) and print the output in paise(like 1595 paise)*/
#include<stdio.h>
int main()
{
    float rupee;
    float conv_value;
    printf("Please enter the price of an item in decimal\n");
    scanf("%f",&rupee);
    conv_value=rupee*100;
    printf("The equivalent amount is Paise is %.2f\n",conv_value);
    return 0;
}