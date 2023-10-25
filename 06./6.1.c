/*
Given a number, write a program using while loop to reverse the digits of the number. 
For example, the number 12345 should be written as 54321.
*/
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;       // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Append it to the reversed number
        num = num / 10;             // Remove the last digit
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
