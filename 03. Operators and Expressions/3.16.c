/*The cost of one type of mobile service is Rs.250 plus Rs. 1.25 for each call made over and 
above 100 calls . Write a program to read customer codes and calls made and print the bill for 
each customer.*/

#include <stdio.h>

int main() {
    int cost = 250;
    int code;
    int calls;
    

    // Assuming that you want to store details for multiple customers,
    // you can use arrays for name, area code, and number of calls.
    char name[1000][20];
    int areaCode[1000];
    int number[1000];

    int numCustomers;

    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    for (int i = 0; i < numCustomers; i++) {
        printf("Enter name for customer %d: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter area code for customer %d: ", i + 1);
        scanf("%d", &areaCode[i]);

        printf("Enter phone number for customer %d: ", i + 1);
        scanf("%d", &number[i]);

        printf("Enter the number of total calls %d: ", i + 1);
        scanf("%d", &calls);
    }

    printf("Would you like to print the bill? (y/n): ");
    char choice;
    scanf(" %c", &choice);  // Note the space before %c to consume any preceding newline

    if (choice == 'y' || choice == 'Y') {
        for (int i = 0; i < numCustomers; i++) {
            printf("Customer: %s, Area Code: %d, Phone Number: %d\n", name[i], areaCode[i], number[i]);
            // Calculate the bill based on the number of calls and print it.
            
            int callsOver100 = calls - 100;
            int bill = cost + (callsOver100 > 0 ? callsOver100 * 1.25 : 0);
            printf("Bill for customer %s: Rs. %d\n", name[i], bill);
        }
    }

    return 0;
}
