/*Write a program that prints the value 10.45678 in exponential format with the following 
specifications.
a).correct to two decimal places
b).correct to four decimal places
c).correct to eight decimal places
*/

#include <stdio.h>

int main() {
    double value = 10.45678;

    // a) Correct to two decimal places
    printf("a) Value in exponential format (2 decimal places): %.2e\n", value);

    // b) Correct to four decimal places
    printf("b) Value in exponential format (4 decimal places): %.4e\n", value);

    // c) Correct to eight decimal places
    printf("c) Value in exponential format (8 decimal places): %.8e\n", value);

    return 0;
}

