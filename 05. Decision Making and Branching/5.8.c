/*A cloth showroom has announced the following seasonal discounts on purchase of items:
Purchase amount                  Discount
                    Mill cloth          Handloom items
        0-100           -                   5%
        101-200         5%                  7.5%
        201-300         7.5%                10.0%
        Above 300       10.0%               15.0%

Write a program using switch and if statements to compute the net amount to be paid 
by a customer.
*/
#include<stdio.h>
int main()
{  
     int choice;
    float price;
    float total=0;
    float allTotal=0;
    char a;
    label:
    printf("Pick Category\n1).Mill cloth\t2).Handloom items\nEnter 1 for Mill cloth and 2 for Handloom items\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter Price of the Mill cloth\n");
        scanf("%f",&price);
        if(price>300)
        {
            printf("There is 10%% discount\n");
            total=price - price*0.1;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else if (price>200)
        {
            printf("There is 7.5%% discount\n");
            total=price - price*0.075;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else if(price>100)
        {
            printf("There is 5%% discount\n");
            total=price - price*0.05;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else
        {
            printf("There is no discount\n");
        }
        break;
        case 2:
        printf("Enter Price of the handloom items\n");
        scanf("%f",&price);
        if(price>300)
        {
            printf("There is 15%% discount\n");
            total=price - price*0.15;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else if (price>200)
        {
            printf("There is 10%% discount\n");
            total=price - price*0.1;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else if(price>100)
        {
            printf("There is 7.5%% discount\n");
            total=price - price*0.075;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        else
        {
            printf("There is 5%% discount\n");
            total=price - price*0.05;
            printf("total = %f\n",total);
            allTotal+=total;
        }
        break;

        default:
        {
            printf("Enter a valid character\n");
        }
        break;
        
    }
    printf("Would you like to enter another item?\n");
    printf("Press y if yes , n if no\n");
    scanf(" %c",&a);
    if(a=='y'||a=='Y')
    {
        goto label;
    }
    else if(a=='n'||a=='N')
    {
        goto end;
    }
    else {
        printf("Invalid input.\n");
    }
    end:
    printf("TOTAL = %f",allTotal);
    return 0;
        
    }
