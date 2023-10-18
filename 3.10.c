/*For a certain electrical circuit with an inductance L and resistance R , 
the damped natural frequency is given by:

Frequency = sqrt((1/LC)-(pow(2,R)/4*pow(2,C)))

It is desired to study the variation of this frequency with C ( capacitance ).
Write a program to calculate the frequency for different values 
of C starting from 0.01 to 0.1 in steps of 0.01.
*/

#include<stdio.h>
#include<math.h>
int main ()
{
    double frequency;
    float l, c ,r; // L (inductance) , C (Capacitance) , R (Resistance)

    printf("Enter the values of Inductance\n");
    scanf("%f",&l);
    printf("Enter the values of Resistance\n");
    scanf("%f",&r);
    c= 0.01;
    printf("Frequency = \n");
    while(c<0.1)
    {
        frequency = sqrt((1/(l*c))-(pow(2,r)/4*pow(2,c)));
        printf("%lf\n",frequency);
        c += 0.01;
    }
    return 0;


}