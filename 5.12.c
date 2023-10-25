/*
An  electricity board charges the following for the us of electricity:

For the first 200 units : 80 P per unit
For the next 100 units : 90 P per unit
Beyond 300 units: RS 1.00 per unit

All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than 
Rs400, then an additional surcharge of 15% of total amount is charged.
Write a program to read the names and numbers of units consumed and printf out the charges with
names. 
*/
#include<stdio.h>
int main()
{
    int meter_charge= 100;
    char name[25];
    float total;
    char a;
    float amount1=0,amount2=0,amount3=0,amount4=0;
    int unit;
    int pricefor200;
    int unitmorethan200;
    int unitmorethan300;
    int difference;
    printf("Enter customer name\n");
    scanf("%s",name);
    int n=23,i;
    printf("Enter units consumed.\n");
    scanf("%d",&unit);    
    printf("Enter p to print the bill\n");
    scanf(" %c",&a);
    switch(a)
    {
        case 'p':
        printf("\n");
        for(i=0;i<n;i++)
        {
        printf("-");
        }
        printf("\n");
        printf("|--Electricity Bill--|\n");
        for(i=0;i<n;i++)
        {
        printf("-");
        }
        printf("\n");
        printf("|Name:%-15s|\n",name);
        if (unit<=200)
    {
        amount1=unit*0.8;
        printf("|%d units %10.2f|\n",unit,amount1);
        total+=amount1;
    }
    if (unit>200)
    {
        pricefor200= 160;
        printf("|200 units %10.2d|\n",pricefor200);
        total+=pricefor200;
        difference = unit-200;
        if(difference>100)
        {
            unitmorethan200=100;
            amount2=unitmorethan200*0.9;
            printf("|%d units %10.2f|\n",unitmorethan200,amount2);
            total+=amount2;
            unitmorethan300=unit-300;
            amount3=unitmorethan300*1;
            printf("|%d units %10.2f|\n",unitmorethan300,amount3);
            total+=amount3;
        }
        else
        {
            unitmorethan200=unit-200;
        amount2=unitmorethan200*0.9;
        printf("|%d units %10.2f|\n",unitmorethan200,amount2);
        total+=amount2;
        }
    }
    int charge= 100;
        printf("|Meter Charge %7.2f|\n",(float)charge);
        total+=charge;
        if(total>400)
        {
            printf("|15%% charge %9.2f|\n",0.15*total);
            total+=0.15*total;
            printf("|Total =%13.2f|\n",total);
        }
        else
        {
            printf("|Total =%13.2f|\n",total);
        }
        for(i=0;i<n;i++)
        {
        printf("-");
        }
        printf("\n");
        break;

    }
    return 0;

    

}