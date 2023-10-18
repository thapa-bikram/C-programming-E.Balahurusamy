/*Write a program to print the size of various data types in C .*/

#include <stdio.h>

int main() {
    printf("%zu Bytes\n", sizeof(int));
    printf("%zu Bytes\n", sizeof(char));
    printf("%zu Bytes\n", sizeof(float));
    printf("%zu Bytes\n", sizeof(short));
    printf("%zu Bytes\n", sizeof(long));
    printf("%zu Bytes\n", sizeof(double));

    return 0;
}
