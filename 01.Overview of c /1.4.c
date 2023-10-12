/*Given the value of three variables a,b and c , 
write a program to compare and display the value of x , where 
x=a/(b-c)

Execute your program for the following values:
a). a=250, b=82,c=25
b). a=300. b=70, c=70
*/
#include<stdio.h>
int main()
{
    float a=250,b=85,c=25;
    float x;
    x=a/(b-c);
    printf("The value of x is %3.3f\n",x);

    a=300;
    b=70;
    c=70;
     x=a/(b-c);
     printf("The value of x is %3.3f",x);


    return 0;
    
}
