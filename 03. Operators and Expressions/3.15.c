/*Write a program to read three values using scanf statement and print the following results:
a). Sum of values
b). Average of the three values
c). largest of the three
d). Smallest of the three */

#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,num3;
    float sum, average,largest,smallest;
    printf("Enter the value of three numbers in order \n");
    scanf("%f%f%f",&num1,&num2,&num3);
    sum = num1 + num2 + num3 ;
    printf("The sum of three numbers is %f \n",sum);
    average = sum/3;
    printf("The average of three numbers is %f\n", average);
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    smallest= (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    printf("The largest number is %f\n", largest);
    printf("The smallest number is %f\n", smallest);
    return 0;

}