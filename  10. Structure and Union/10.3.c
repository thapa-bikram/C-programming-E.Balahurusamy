/*
Design a function update that would accept the data structure designed in Exercise 10.1 and 
increments time by one second and returns the new time.
(If the increment results in 60 seconds, then the second member is set to zero and the minute member if 
incremented by one. Then, if the result is 60 minutes, the minute member is set to zero and hour member
is incremented by one.
Finally when hour becomes 24, it is set to zero.

*/

#include<stdio.h>
typedef struct 
{
    int hour;
    int minute;
    int second;

}time;

void set_time(time* t1)
{
    printf("Enter hour\n");
    scanf("%d",&t1->hour);
    printf("Enter minute\n");
    scanf("%d",&t1->minute);
    printf("Enter second\n");
    scanf("%d",&t1->second);
    t1->second++;
    if(t1->second >=60)
    {
        t1->second=0;
        t1->minute++;
        if(t1->minute >=60)
        {
            t1->minute=0;
            t1->hour++;
            if(t1->hour>=24)
            t1->hour=1;
        }
    }
} 

void display_time(time t1)
{
    printf("%d:%d:%d\n",t1.hour,t1.minute,t1.second);
}

int main()
{
    time current_time;
    set_time(&current_time);
    display_time(current_time);
    return 0;


}