/*Reading of real numbers (in both decimal point and exponential notation) is illustrated 
in this example*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    float x,y;
    double p,q;
    printf("Values of x and y ");
    scanf("%f%f",&x,&y);
    printf("\n");
    printf("x= %f \n y= %f \n \n", x, y);
    printf("Values of p and q");
    scanf("%lf%lf",&p,&q);
    printf("\n \n p = %.121lf \n q= %.12e ", p,q);
    return 0;
}