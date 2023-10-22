/*Write a program to read three integers from the keyboard using one scanf statement and 
output them on one line using:
a).three printf statement
b).only one printf with conversion specifiers. and 
c).only one printf without conversion specifiers.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Read three integers from the keyboard using one scanf statement
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Output using three printf statements
    printf("Using three printf statements:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);

    // Output using one printf statement with conversion specifiers
    printf("\nUsing one printf with conversion specifiers:\n");
    printf("Number 1: %d, Number 2: %d, Number 3: %d\n", num1, num2, num3);

    // Output using one printf statement without conversion specifiers
    printf("\nUsing one printf without conversion specifiers:\n");
    printf("Numbers: %d %d %d\n", num1, num2, num3);

    return 0;
}
