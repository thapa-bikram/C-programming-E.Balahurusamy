/*The price of one kg of rice is Rs. 16.75 and one kg of sugar is RS.15. Write a program to get values from the user and display
the prices as follows:*/

#include<stdio.h>
int main()
{
    float rice , sugar;
    printf("enter the value of rice\n");
    scanf("%f",&rice);
    printf("enter the value of sugar\n");
    scanf("%f",&sugar);
    printf("Items \tPrice\nrice \t%0.2f\nSugar \t%0.2f\n",rice,sugar);
    return 0;


}