#include<stdio.h>
int main()
{
    int number = 12;
    float number2=40.33;
    printf("%5d\n",number);
    printf("%-6d\n",number); //reserves space for 5 characters and prints the number , the output if right justified.
    printf("%06d\n",number);
    printf("%7.2f",number2); //reserves total of 7 characters , space for 2 digits will be reserved for characters after decimal.

    return 0;
}