/*Reading of strings using %wc and %ws is illustrated. 
When we use %wc for reading a string, the system will wait until the wth character is keyed in.
ws terminates reading at the encounter of a blank space.
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
    int no;
    char name1[15],name2[15],name3[15];
    printf("Enter serial number and name one \n");
    scanf("%d %15c",&no,name1);
    printf("%d %15s\n\n",no,name1);

    printf("Enter a serial number and a name two \n");
    scanf("%d %s",&no, name2);

    printf("Enter serial number and name three\n");
    scanf("%d %15s", &no , name3);
    printf("%d %.15s\n\n",no,name3);
    return 0 ;
    }
/*The & operator is used to get the address of the int variable so that scanf can store 
the input value at that address.
But when we use an array variable in the context of scanf for reading strings, you don't 
use the & operator. The reason for this is that an array itself represents a memory location, 
so there's no need to get its address using &.
In C, an array variable without the & operator provides the address of the first element of the array.
This is because the array variable essentially holds a pointer to the first element. 
So, when you pass name1 to scanf, it's already a pointer to the memory location where the input string 
should be stored. Adding the & operator in this context would result in incorrect behavior.*/

