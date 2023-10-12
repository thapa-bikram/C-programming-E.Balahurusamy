/*Distance between two points(x1,y1) and (x2,y2) is governed by the formula
D^2=(X2-X1)^2+(y2-y1)^2*/

#include<stdio.h>
#include<math.h>
void distance (x1,y1,x2,y2)
{
    float d ;
    d=sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
    printf("the distance between the given points is %f",d);

}
int main()
{
    float x1,y1,x2,y2,d;
    printf("enter the values for x1 and y1 \n");
    scanf("%f%f",&x1,&y1);
    printf("enter the values for x2 and y2 \n");
    scanf("%f%f",&x2,&y2);
    distance(x1,y1,x2,y2);
    return 0;
}