/*Write a program to count and print the number of negative and positive numbers in a given set of numbers .
Test your program with suitable set of numbers. Use scanf to read to read the numbers.
Reading should be terminated when the value 0 is encountered.*/
#include<stdio.h>
int main()
{
    float a[100];
    int i=0,n ;
    printf("enter a range of values\n");
    printf("i=%d \t ",i);
    while (1) 
    {
        scanf("%f", &a[i]);
        
        if (a[i] == 0) {
        break;
    }
    i++;
        printf("i=%d \t ",i);
    }
    n=i;
    printf("Total number of values %d\n",n);
    printf("The positive & negative values in the range are\n");
    i=0;
    printf("Positive values\n");
     while (i<n) 
    {
        if (a[i]>0) 
        {
            printf("+%f\n", a[i]);
        
        }
    
    i++;
    }
    i=0;
    printf("Negative values\n");
     while (i<n) 
    {
        if (a[i]<0) 
        {
            printf("%f\n", a[i]);
        
        }
        i++;
    }
    return 0;

}




