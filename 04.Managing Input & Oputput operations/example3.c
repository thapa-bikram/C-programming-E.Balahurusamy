/*A program that converts a character from keyboard and then prints it in reverse case . That is
, if the input is given in uppercase , the output will be lowercase and vice versa*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char alphabet;
    printf("Enter a character");
    putchar('\n');
    alphabet=getchar();
    if(islower(alphabet))
    {
        putchar(toupper(alphabet));
         putchar('\n');
    }
    else
    {
        putchar(tolower(alphabet));
         putchar('\n');
    }
    return 0;
}