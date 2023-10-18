/*Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.
*/
#include<stdio.h>
int main ()
{
    int m ,n;
    char mystring;
    printf("Enter the values of two integers \n");
    printf("m= \n");
    scanf("%d",&m);
    printf("n= \n");
    scanf("%d",&n);
    char* myString=(m%n == 0) ? "m is multiple of n":"m is not a multiple of n";
    printf("%s",myString);
    return 0;

}