/*
10.5 Design a function that accepts data structure designed in Exercise 10.4 to increment the data by one 
day and return the new date. The following rules are applicable:

If date is the last day in a month, month should be incremented
If it is the last day in december, the year should be incremented
There are 29 days in February of a leap year

*/
#include<stdio.h>
#include<string.h>
typedef struct 
{
    int day;
    int month;
    int year;
    
}date;
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

void checker(date* d)
{
    d->day=1;
    if(d->month==12)
    {
        d->year++;
    }
    d->month++;
    if(d->month>12)
    {
        d->month=d->month%12;
    }
    
}

int validate_date(date* d)
{
    int flag;
    flag = isLeapYear(d->year);
    if(flag == 1)
    {
        if(d->month==2 && d->day>=29)
        {
            printf("This is a Leap year and February has only 29 days\n");
            printf("Re-enter date\n");
            return 1;
        }
        else if(d->month ==4 || d->month ==6 || d->month == 9 || d->month == 11)
        {
            if(d->day>30)
            {
                printf("Maximum number of days for %d month is 30\n",d->month);
                return 1;
            }
            else if(d->day==30)
            {
                checker(d);
            }

            
        }
        else if(d->month ==1 || d->month ==2 || d->month ==3 || d->month ==5 || d->month ==7 || d->month ==10 ||d->month ==12)
        {
            if(d->day >31)
            {
                printf("Maximum number of days for %d month is 31\n",d->month);
                return 1;

            }
            else if(d->day==31)
            {
                checker(d);
            }
            
        }
        
    }
    else 
    {
        if(d->month==2 && d->day>=29)
        {
            printf("This is a Leap year and February has only 29 days\n");
            printf("Re-enter date\n");
            return 1;
        }
        else if(d->month ==4 || d->month ==6 || d->month == 9 || d->month == 11)
        {
            if(d->day>30)
            {
                printf("Maximum number of days for %d month is 30\n",d->month);
                return 1;
            }
            else if(d->day==30)
            {
                d->month++;
            }
            
            
        }
        else if(d->month ==1 || d->month ==2 || d->month ==3 || d->month ==5 || d->month ==7 || d->month ==10 ||d->month ==12)
        {
            if(d->day >31)
            {
                printf("Maximum number of days for %d month is 31\n",d->month);
                return 1;

            }
            else if(d->day==31)
            {
                d->month++;
            }
            
        }
        else if(d->month >12)
        {
            printf("Enter month value from 1 to 12\n");
            return 1;
        }
        
    }
    return 0;


}

void read_date(date* d)
{
    int flag;
    label:
    printf("Enter year\n");
    scanf("%d",&d->year);
    printf("Enter month\n");
    scanf("%d",&d->month);
    printf("Enter day\n");
    scanf("%d",&d->day);
    
    flag = isLeapYear(d->year);
    
}


void print_date(date* d)
{
    for(int i=0;i<35;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("%s","Printing the date entered by user\n");
    for(int i=0;i<35;i++)
    {
        printf("-");
    }
    printf("\n");
    switch(d->month)
    {
        case 1:
        printf("January ");
        break;

        case 2:
        printf("February ");
        break;

        case 3:
        printf("March ");
        break;

        case 4:
        printf("April ");
        break;

        case 5:
        printf("May ");
        break;

        case 6:
        printf("June ");
        break;

        case 7:
        printf("July ");
        break;

        case 8:
        printf("August ");
        break;

        case 9:
        printf("September ");
        break;

        case 10:
        printf("October ");
        break;

        case 11:
        printf("November ");
        break;

        case 12:
        printf("December ");
        break;
    }
    
    printf("%d,",d->day);
    printf(" %d",d->year);
    printf("\n");
    printf("\n");



}
int main()
{
    date request_date;
    int i=0;
    label:
    read_date(&request_date);
    i=validate_date(&request_date);
    if(i==1)
    {
        goto label;
    }
    //checker(&request_date);
    print_date(&request_date);
}