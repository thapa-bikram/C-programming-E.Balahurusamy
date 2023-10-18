/*In inventory management , the Economic ORder Quantity for a single item is given by 
EOQ=SQRT((2*demand rate *setup costs)/(holding cost per unit time))
and the optimal Time Between Orders 
TBO=SQRT((2*setup costs)/(demand rate*holding cost per unit time)
Write a program to computer EOQ and TBO, given demand rate (items per unit time),setup costs
(per order), and the holding cost (per item per unit time).
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float demand_rate;
    float setup_costs;
    float holding_cost;
    double eoq, tbo;

    printf("Enter the valus of Demand rate , Setup cost and Holding cost in order\n");
    scanf("%f%f%f",&demand_rate,&setup_costs,&holding_cost);

    eoq=sqrt((2*demand_rate*setup_costs)/(holding_cost));
    tbo=sqrt((2*setup_costs)/(demand_rate*holding_cost));

    printf("EQQ= %lf\n",eoq);
    printf("EQQ= %lf\n",tbo);
    return 0;



}

