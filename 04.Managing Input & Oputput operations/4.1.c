/*Given the string "WORDPROCESSING", write a program to read the string form the terminal and
display the same in the following formats:*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char word[15]="WORDPROCESSING";
    printf("%4.4s %s\n",word, word+4);
    printf("%4.4s \n%s\n",word, word+4);
     printf("%1.1s.%1.1s.",word, word+4);


    return 0;
}