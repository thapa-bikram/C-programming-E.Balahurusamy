/*The total distance traveled by a vehicle in t seconds is given by:distance = ut+(at^2)/2

Where u is the initial velocity (meters per second),a is the acceleration (meters per second ^ 2).
Write a program to evaluate the distance traveled at regular intervals of time,
given the values of u and a. The program should provide the flexibility to the user to select 
his own time intervals and repeat the calculations for different values of u and a.
*/

#include<stdio.h>
#include<math.h>
int main()
{

    float u , t, a;
    double distance;
    while(1)
    {
    printf("Enter the value of initial velocity\n");
    scanf("%f",&u);
    printf("Enter the value of time intervals\n");
    scanf("%f",&t);
    printf("Enter the value of acceleration\n");
    scanf("%f",&a);
    distance = u*t + 0.5*(pow(2,a*t));
    printf("Distance traveled = %lf \n",distance);
    }
     return 0;

}
