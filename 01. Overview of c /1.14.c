/*A point on the circumference of a circle whose center is (0,0) is (4,5). Write a program
to compute perimeter and area of the circle.
Hint:use the formula given in he Ex. 1.11*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
float distance(x,y)
{
    int x_value_of_center=0;
    int y_value_of_center=0;
    float distance= sqrt( pow(x-x_value_of_center,2)+pow(y-y_value_of_center,2));
    return distance;

}
int main()
{
    int x_value_of_point=4;
    int y_value_of_point=5;
    float area, perimeter;
    float radius;
    radius=distance(x_value_of_point,y_value_of_point);
    perimeter = 2*PI*radius;
    area=PI*pow(radius,2);
    printf("The perimeter of a circle is %f\n",perimeter);
    printf("The area of a circle is %f\n",area);
    return 0;
}
