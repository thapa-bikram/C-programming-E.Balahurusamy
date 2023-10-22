#include <stdio.h>

int main() {
    char address[80];
    printf("Enter address: ");
    scanf(" %s", address); // Note the space before %c to skip leading whitespace.

    printf("%s\n", address);

    return 0;
}
