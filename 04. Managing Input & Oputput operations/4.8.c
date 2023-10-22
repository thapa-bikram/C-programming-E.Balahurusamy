/*Write a program to print the value 345.6789 in fixed-point format with the following specifications:
a).correct to two decimal places
b).correct to five decimal places
c).correct to zero decimal places
*/
#include<stdio.h>
int main ()
{
    float number = 345.6789;
    printf("a). %.2f\n",number);
    printf("a). %.5f\n",number);
    printf("a). %.0f\n",number);
    return 0;

}
