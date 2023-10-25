/*Write a program to computer the real roots of a quadratic equation ax^2+bx+c=0
The roots are given by the equations

x1=-b+sqrt(b^2-4ac)/2a
x2=-b-sqrt(b^2-4ac)/2a

The program should request for the values of the constants a,b and c and print the values of 
x1 and x2. Use the following rules:
a).No solution, if both a and b are zero
b).There is only one root, if a=0(x=-c/b)
c).There are no real roots, if b^2-4ac is negative
d).Otherwise, there are two real roots

Test your program with appropriate data so that all logical paths are working as per your design.
Incorporate appropriate output messages.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // Input coefficients a, b, and c
    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("No solution (a and b are both zero).\n");
        } else {
            x1 = -c / b;
            printf("There is one root: x = %.2lf\n", x1);
        }
    } else {
        discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            printf("There are no real roots (discriminant is negative).\n");
        } else {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}
