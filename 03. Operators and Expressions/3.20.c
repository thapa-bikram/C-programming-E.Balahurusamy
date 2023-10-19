/*Write a program to illustrate the use of cast operator in a real life situation.*/

#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793238

int main() {
    int radius;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Calculate the area by casting the radius to double
    double area = pi * (double)radius * radius;

    // Display the area of the circle
    printf("The area of the circle is: %.2f square units\n", area);

    return 0;
}


/*Treating the radius as a double is important in this context because the formula 
for calculating the area of a circle (π * r^2) involves mathematical operations 
that typically require floating-point numbers. Here's why:
1).Precision: The value of π (pi) is an irrational number with an infinite number of 
decimal places. When you perform calculations involving π, it's crucial to have 
sufficient precision to get accurate results. Using a double data type provides 
the necessary precision for this.

2).Rounding Errors: When you calculate the square of an integer (r^2), you might encounter 
rounding errors. Converting the radius to double before performing the calculation helps 
minimize these errors and ensures a more accurate result.

3).Accurate Area: The area of a circle is typically a non-integer value. To represent it 
accurately, you need to work with floating-point numbers. Casting the radius to double 
ensures that the result is a floating-point value that accurately represents the area of 
the circle.

While you can calculate the area of a circle using integers for the radius, casting it to 
double is a common practice to ensure that the mathematical operations are performed with 
the required precision. This approach is especially important when working with mathematical 
formulas that involve constants like π or when you need precise results for real-world applications.
*/