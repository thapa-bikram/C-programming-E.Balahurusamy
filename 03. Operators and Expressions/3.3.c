/*Modify the above program to display the two right-most digits of the integral part
of the number .*/
#include<stdio.h>
int main()
{
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int integralPart = (int)num;
    int rightMostDigit = integralPart % 100;
    printf("The right-most digit of the integral part is: %d\n", rightMostDigit);
    return 0;
}