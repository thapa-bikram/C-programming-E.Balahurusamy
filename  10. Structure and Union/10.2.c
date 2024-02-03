/* Modify the above program such that a function is used to input
values to the members and another function to display the time. */
#include<stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int second;
}time;
void func(struct time *a)
{
    a->hour= 16;
    a->minute=40;
    a->second=51;  
}

void displayTime(struct time a) {
    printf("Time: %02d:%02d:%02d\n", a.hour, a.minute, a.second);
}


int main()
{
    time t1;
    func(&t1);
    displayTime(t1);


}