/*Write a program that will obtain the length and width of a rectangle from the user 
and compute its area and perimeter*/
#include<stdio.h>
int main ()
{
    float length, width;
    float perimeter, area;
    printf("Enter length and breadth of a Rectangle\n");
    scanf("%f%f",&length,&width);
    perimeter=2*(length+width);
    area=length*width;
    printf("The perimeter of the given rectangle is %0.2f \n",perimeter);
    printf("The area of the given rectangle is %0.2f \n",area);
    return 0;
}