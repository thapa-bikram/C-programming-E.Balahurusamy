/*The character 2 is assigned to the character variable c*/

#include<stdio.h>
int main()
{
    int a; 
    float b;
    char c;
    printf("Enter the values of a , b and c ");
    if(scanf("%d %f %c",&a,&b,&c)==3) //If it successfully reads and assigns values to all three variables (in this case, a, b, and c), it will return 3.
    {
        printf("a=%d b=%f c=%c\n",a,b,c);
    }
    else
    {
        printf("Error in input");
    }
    return 0;
}