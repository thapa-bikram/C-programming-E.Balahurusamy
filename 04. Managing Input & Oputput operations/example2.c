/*this program reads a character from the user and tests whether it is a letter or a 
digit and prints telling the user whether the character is an alphabet or any other 
special character*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    printf("Press any key");
    character = getchar();
    if(isalpha(character))
    {
        printf("The character is alphabet");
    }
    else if(isdigit(character))
    {
        printf("The character us a digit");
    }
    else{
        printf("The character is not alpha numeric");
    }
    return 0;

}