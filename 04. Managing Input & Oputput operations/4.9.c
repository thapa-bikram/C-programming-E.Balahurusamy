/*Write a program to read the name ANIL KUMAR GUPTA in three parts using scanf statement 
and to display the same in the following format using printf statement
a). ANIL K. GUPTA
b). A.K. GUPTA
c). GUPTA A.K.
*/

#include<stdio.h>
#include<ctype.h>

int main() {
    char x = 'A', y = 'K';
    char a[5], b[6], c[6]; 

    printf("Enter name\n");
    scanf("%s", a); 
    scanf("%s", b); 
    scanf("%s", c); 

    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);
    }

    for (int i = 0; b[i] != '\0'; i++) {
        b[i] = toupper(b[i]);
    }

    for (int i = 0; c[i] != '\0'; i++) {
        c[i] = toupper(c[i]);
    }

    // a) Display as ANIL K. GUPTA
    printf("a) %s %c. %s\n", a, y, c);

    // b) Display as A.K. GUPTA
    printf("b) %c.%c. %s\n", x, y, c);

    // c) Display as GUPTA A.K.
    printf("c) %s %c.%c.\n", c, x, y);

    return 0;
}
