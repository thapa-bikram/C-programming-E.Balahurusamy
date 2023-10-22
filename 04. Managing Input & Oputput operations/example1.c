/*Given the format "WORDPROCESSING", write a program to read the string from the terminal and 
display the same in the following formt.*/

#include<stdio.h>
int main()
{
    char answer;
    printf("Would you like to know my name?\n");
    printf("Types y for YES and N for No\n");
    answer=getchar();
    if (answer == 'Y' || answer == 'y')
    {
        printf("My name is Busy Bee\n");
        
    }else
    {
        printf("You are good for nothing\n");
    }
    return 0;
}