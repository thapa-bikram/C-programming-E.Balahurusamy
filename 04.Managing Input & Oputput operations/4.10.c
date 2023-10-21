/*Write a program to read and display the following table of data.
    Name        Code        Price
    Fan         67831       1234.50
    Motor       450         5786.70

The name and code must be left-justified and price must be right-justified.
*/

#include <stdio.h>
#include <string.h> // Include for string manipulation

int main() {
    int count;
    printf("How many items do you want to enter?\n");
    scanf("%d", &count);

    char name[count][50]; // 2D array for names
    int code[count];      // 1D array for codes
    float price[count];   // 1D array for prices

    for (int i = 0; i < count; i++) {
        printf("Product %d details\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name[i]);
        printf("Enter code: ");
        scanf("%d", &code[i]);
        printf("Enter price: ");
        scanf("%f", &price[i]);
    }

    printf("\n");
    printf("Name\t\tCode\t\tPrice\n");
    for (int i = 0; i < count; i++) {
        printf("%-15s %-10d %10.2f\n", name[i], code[i], price[i]);
    }

    return 0;
}
