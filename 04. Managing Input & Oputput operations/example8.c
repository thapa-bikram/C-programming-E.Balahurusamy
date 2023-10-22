/*Illustration of function of %[] specification.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char address[80];
    printf("Enter address\n");
    scanf(" %[^\n]", address);// Use %[^\n] to read a string until a newline character is encountered. 
    printf("%s\n", address);
    return 0 ;

}