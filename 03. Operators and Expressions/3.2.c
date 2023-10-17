/*Write a program that reads a floating-point number and then displays the right-most digit
of the integral part of the number.*/
#include<stdio.h>
#include <math.h>
int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int integralPart = (int)num;
    int rightMostDigit = integralPart % 10;
    printf("The right-most digit of the integral part is: %d\n", rightMostDigit);
    return 0;
}