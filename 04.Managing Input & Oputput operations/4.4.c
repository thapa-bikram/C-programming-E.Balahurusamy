/*Write a program to read four floating point values in the range , 0.0 to 20.0 and print
a horizontal bar chart to represent these values using the character * as the fill characters .
For the purpose of the chart, the values may be rounded off to the nearest integer
. For example 4.36 should be represented as follows */
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

int main() {
    float num[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Enter a floating point value between 0.0 and 20.0: ");
        if (scanf("%f", &num[i]) != 1 || num[i] < 0.0 || num[i] > 20.0) {
            printf("Invalid input. Please enter a valid number between 0.0 and 20.0.\n");
            i--;
        }
    }

    for (i = 0; i < 4; i++) {
        num[i] = roundf(num[i]);
    }

  

    // Print the horizontal bar chart
    for (i = 0; i < 4; i++) {
        printf("%.2f: ", num[i]);
        for (int j = 0; j < num[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

