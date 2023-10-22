/*Illustration of function of %[] specification.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char address[80];
    printf("Enter address\n");
    scanf("%[a-z]", address); // does not accept uppercase alphabets, white spaces and numeric values
    printf("%s\n", address);
    return 0 ;

}