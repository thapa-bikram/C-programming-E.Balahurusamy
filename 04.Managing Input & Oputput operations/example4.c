/*Various input formatting options for reading integers are experimented in the program*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    int a ,b,c,x,y,z;
    int p,q,r;
    printf("Enter three integer values");
    scanf("%d%*d%d",&a,&b,&c);
    printf("%d %d %d\n", a,b,c);
    printf("Enter two 4 digit number");
    scanf("%2d%4d",&x,&y); 
    printf("%d %d\n\n",x,y);
    printf("Enter two integers\n");
    scanf("%2d%4d",&a,&x); 
    printf("\n%d %d\n\n",a,x);
    printf("Enter a nine digit number\n");
    scanf("%3d%4d%3d",&p,&q,&r);
    printf("%d %d %d\n\n",p,q,r);
    printf("Enter two three digit number\n");
    scanf("%d%d",&x,&y);
    printf("%d %d",x,y);


}