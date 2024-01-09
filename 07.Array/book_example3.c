#include<stdio.h>
#include<string.h>
int main()
{
    char a[16];
    int i,j,k,len;
    printf("Enter a binary number\n");
    gets(a);
    len=strlen(a);
    for(k=0;a[k]!='\0';k++)
    {
        if(a[k]!='0' && a[k]!='1')
        {
            printf("\n Incorrect binary number format");
            break;
        }
    }
    for(i = len-1;a[i]!='1';i--);
    for(j=i-1;j>=0;j--)
    {
        if(a[j]=='1')
        a[j]='0';
        else
        a[j]='1';
    }
    printf("\n 2's complement = %s",a);
    return 0;
}