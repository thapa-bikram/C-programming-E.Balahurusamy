/*Rewrite the program of the Example 6.1 using the FOR statement. */

#include<stdio.h>

int countDigits(int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    for (; number > 0; number /= 10) {
        count++;
    }

    return count;
}
int main()
{
    int number,i,remainder=0,reversedNum=0;
    printf("Enter a number\n");
    scanf("%d",&number);
    int count=countDigits(number);
    for(i=0;i<count;i++)
    {
        remainder = number % 10;       // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Append it to the reversed number
        number = number / 10;
    }
    printf("The reverses number is %d\n",reversedNum);
    return 0;

}