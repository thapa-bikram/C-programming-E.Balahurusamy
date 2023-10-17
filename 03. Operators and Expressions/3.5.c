/*
Given an integer number,write a program that displays the number as follows:
First line  :   all digits
Second line :   all except first digit
Third line  :   all except first two digits
.....
Last line   :   The last digit
For example, the number 5678 will be displayed as:
5 6 7 8
6 7 8
7 8
8
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    int duplicate;
    int count=0;
    int i=0;
    int result=1;
    printf("enter a number\n");
    scanf("%d",&number);
    duplicate=number;
     while (number > 0) 
     {
            number /= 10;
            count++;
            
            

    }
    printf("%i\n",duplicate);
    while (count>1)
    {
        
        duplicate=(int)duplicate%(int)(pow(10,count-1));
        printf("%i\n",duplicate);
        count--;
        

    }
    
    return 0;
}