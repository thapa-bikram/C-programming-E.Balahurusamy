/*Write a program to read three integer values from the keyboard and display the output
that they are the sides of right-angled triangle.*/
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the values of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Using the Pythagorean theorem
    if (side1 * side1 == side2 * side2 + side3 * side3 ||
        side2 * side2 == side1 * side1 + side3 * side3 ||
        side3 * side3 == side1 * side1 + side2 * side2) {
        printf("This is a right-angled triangle.\n");
    } else {
        printf("This is not a right-angled triangle.\n");
    }

    return 0;
}
