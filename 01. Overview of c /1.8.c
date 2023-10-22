/*Modify the above program to provide the boarder line to the address*/
#include <stdio.h>

void add(int num1, int num2) {
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void sub(int num1, int num2) {
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

int main() {
    int integer1 = 20, integer2 = 10;

    printf("---------------\n");
    add(integer1, integer2);
    sub(integer1, integer2);
    printf("---------------\n");

    return 0;
}
