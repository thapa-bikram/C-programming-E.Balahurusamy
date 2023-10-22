/*Area of triangle is given by the formula
A=Sqrt(S(S-a)(S-b)(S-c))
Where a, b and c are the sides of the triangle and 2S= a+b+c. Write a program to compute the area of triangle
given the values of a , b and c. 
*/

#include <stdio.h>
#include <math.h>  // Include the math library for sqrt() function

int main() {
    float a = 4, b = 4, c = 6;
    float s, area;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is %f\n", area);
    return 0;
}
