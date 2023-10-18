/*The straight-line method of computing the yearly depreciation of the item is given by 
Depreciation = (Purchase Price - Salvage Value)/years of Service.
write a program to determine the salvage value of an item the purchase price , years of service
and depreciation value is given.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float s_value, p_value, yearsOfS,d_value;
    printf("Enter purchase price , years of service and depreciation value\n");
    scanf("%f%f%f",&p_value,&yearsOfS,&d_value);
    s_value=p_value -(d_value*yearsOfS) ;
    printf("Salvage value = %f\n",s_value);
    return 0;
}
