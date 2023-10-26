/*Write a program to read the age of 100 persons and count the number of persons in the 
age group 50 to 60. Use for and continue statements.*/
#include <stdio.h>

int main() {
    int age, count = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Enter the age of person %d: ", i);
        scanf("%d", &age);

        if (age < 50 || age > 60) {
            continue; // Skip this person and move to the next iteration
        }

        count++;
    }

    printf("Number of persons in the age group 50 to 60: %d\n", count);

    return 0;
}
