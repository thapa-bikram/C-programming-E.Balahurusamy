/*Write a program that prints even number from one to hundred */
#include<stdio.h>
#define max_value 100
int main()
{
    int i=0;
    while(i<=max_value)
    {
        if(i%2==0)
        {
            printf("%i\n",i);
        }
        i++;
    }
    return 0;
    printf("hello");
}