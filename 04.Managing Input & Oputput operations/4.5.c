/*Write an interactive program to demonstrate the process of multiplication. The program should ask the user
tp enter two digit integers and print the product of integers */

#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%i%i",&num1,&num2);
    printf("%14.2i\n",num1);
    printf("*%13.2i\n",num2);
    printf("-------------------\n");
    printf("%1.1i * %2.2i is %4.2i \n",num2%10,num1,num1*(num2%10));
    printf("%1.1i * %2.2i is %4.2i \n",num2/10,num1,num1*(num2/10));
    printf("-------------------\n");
    printf("Add them %05.4i \n",(num1*(num2/10))+ num1*(num2%10));
    return 0;


    


}