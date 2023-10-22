/*Write a program to print a two-dimensional Square Toot Table as shown below,
to provide the square root fo any number from 0 to 9.9. For example, the value x will
give the square root of 3.2 and y the square root of 3.9.
----------------------------------------------------
Number      0.0     0.1     0.2     .....       0.9
-----------------------------------------------------
0.0                         
1.0
2.0
3.0                          x                   y
9.0
------------------------------------------------------
*/
#include <stdio.h>
#include<math.h>

int main() {
    float i, j;

    printf("Number|");  

    // Header row with i values
    for (i = 0; i < 1; i += 0.1) {
        printf("%6.1f|", i);
    }
    printf("\n");
    for (int k = 0; k < 11; k++) {
        printf("------|");
    }
    printf("\n");

    // Table rows
    for (j = 0; j < 10; j++) {
        printf("%6.1f|", j);  // Row label
        for (i = 0; i < 1; i += 0.1) {
        printf("%6.1f|", sqrt(i+j));  // Data values
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
