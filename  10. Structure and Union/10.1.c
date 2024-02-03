/* Define a structure data type called time_struct containing three members
integer hour, integer minute and integer second. Develop a program that would
assign values to the individual members and display the time in 
the following forma:

    16:40:51
*/
#include<stdio.h>
int main()
{
    struct time 
    {
        int hour;
        int minute;
        int second;
    };

    struct time t1;
    t1.hour=16;
    t1.minute=40;
    t1.second=51;
    printf("%d:%d:%d\n",t1.hour,t1.minute,t1.second);
    return 0;
}