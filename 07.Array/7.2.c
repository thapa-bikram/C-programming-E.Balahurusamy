#include<stdio.h>
int main()
{
    char highest=0;
    char lowest=0;
    int count;
    int a[4][10]={(1,2,3,4,5,6,7,8,9,10),(10,11,12,13,14,15,16,17,18,19),(20,21,22,23,24,25,26,27,28,29),(31,32,33,34,35,36,37,38,39,40),(41,42,43,44,45,46,47,48,49,50)};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(highest<a[i][j])
            {
                highest=a[i][j];
                count=j;
            }
        }
        switch[]
    }
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<10;i++)
        {
            if(lowest>a[j])
            {
                lowest=a[j];
            }
            else
            {
                printf("%s has the highest temperature of %d",a[i],lowest);
            }
        }
    }
    return 0;
}