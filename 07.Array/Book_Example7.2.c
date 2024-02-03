//Calculation of Standard Deviation.
#include<math.h>
#include<stdio.h>
#define MAXSIZE 100
int main()
{
    int i,n;
    float value [MAXSIZE], deviation, sum,sumsqr,mean,variance,stddeviation;
    sum=0;
    sumsqr=0;
    n=0;
    printf("Input values:input-1 to end \n");
    for(i=0;i<MAXSIZE;i++)
    {
        scanf("%f",&value[i]);
        if(value[i]==-1)
        break;
        sum+=value[i];
        n+=1;
    }
    mean=sum/(float)n;
    for(i=0;i<=n;i++)
    {
        deviation = value[i]-mean;
        sumsqr+= deviation*deviation;
    }
    variance = sumsqr/(float)n;
    stddeviation = sqrt(variance);
    printf("\nNumber of items: %d\n",n);
    printf("Mean : %f\n",mean);
    printf("Standard Deviation: %f\n",stddeviation);
    return 0;
}