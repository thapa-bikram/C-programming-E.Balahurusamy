#include<stdio.h>
int main()
{
    char name[25];
    float total=412;
    char a;
    printf("Enter customer name\n");
    scanf("%s",name);
    printf("Enter p to print the bill\n");
    scanf("%c",&a);
    switch(a)
    {
        case 'p':
        if(total>400)
        {
        total+=0.15*total;
        }
        printf("Bill for Customer=%s\t\n",name);
        printf("Total \t %f",total+100);
        break;

    }
}