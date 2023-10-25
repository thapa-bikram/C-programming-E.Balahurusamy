/*Write a program that will read the value of x and evaluate the following function

y={
    1 for x>0
    0 for x=0
    -1 for x<0
}

using 
a).nested if statements,
b).else if statements, and
c).conditional operator ?:
  */

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Using nested if statements
    if (x > 0) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = -1;
    }

    printf("Using nested if statements: y = %d\n", y);

    // Using else if statements
    if (x > 0) {
        y = 1;
    } else if (x < 0) {
        y = -1;
    } else {
        y = 0;
    }

    printf("Using else if statements: y = %d\n", y);

    // Using conditional operator ?:
    y = (x > 0) ? 1 : (x < 0) ? -1 : 0;

    printf("Using the conditional operator ?: y = %d\n", y);

    return 0;
}


