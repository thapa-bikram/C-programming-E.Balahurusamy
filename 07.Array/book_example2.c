/*Write a program tp count the number of students belonging to each of the following groups of marks: 0-9,10-19.....100)*/
#include<stdio.h>
int main()
{
    float value[5];
    int i, low, high;
    int group[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<5;i++)
    {
        scanf("%f",&value[i]);
        ++group[(int)(value[i]/10)];
    }
    printf("\n");
    printf("Group\t Range\t Frequency\n\n");
    for(i=0;i<11;i++)
    {
        low=i*10;
        if(i==10)
        high=100;
        else
        high = low+9;
        printf("%2d %3d to %3d %4d \n", i+1 ,low , high , group[i]);
    
    }
    return 0;


}