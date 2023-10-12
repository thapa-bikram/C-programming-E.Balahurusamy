/*The line joining the points (2,2) and (5,6) which lie on the circumference
of a circle is the diameter of the circle . Write a program to compute the area 
of the circle*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    
    int x_value_of_point1=2;
    int y_value_of_point1=2;
    int x_value_of_point2=5;
    int y_value_of_point2=6;
    float length_of_diameter= fabs(sqrt( pow(x_value_of_point2-x_value_of_point1,2)+pow(y_value_of_point2-y_value_of_point1,2)));
    float radius=length_of_diameter/2;
    float area=PI*pow(radius,2);
    printf("The area of a circle is %f\n",area);
    return 0;
}
