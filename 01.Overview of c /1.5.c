/*Relationship between Celsius and Fahrenheit is govened by the formula
F=(9C/5)+32
write a program to convert the temperature 
a). from celsius to fahrenheit and
b). from fahrenheit to celsius .
*/
#include<stdio.h>
int main ()
{
    float c,f;
    printf("Enter Celsius");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("the converted value is %f\n",f);

    printf("Enter Fahrenheit");
    scanf("%f",&f);
    c=(5*f-32)/9;
    printf("the converted value is %f\n",c);

    return 0;

}