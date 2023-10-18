/*Write a program that will read a real number from the keyboard d print the following output in one line:
Smallest integer not        The given number        Largest integer not 
less than the number                                  greater than that number
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double number;
    printf("Enter the number .\n");
    scanf("%lf",&number);
    printf("%i \t",(int)floor(number));
    printf("%0.2f  \t",number);
    printf("%i \n",(int)ceil(number));
    
    return 0;
}