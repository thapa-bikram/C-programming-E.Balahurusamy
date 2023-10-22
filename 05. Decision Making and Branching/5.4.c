/*Given a list of marks ranging from  0 to 100 ,write a program to compute and print the 
number of students:
a).who have obtained more than 80 marks
b).who have obtained more than 60 marks
c).who have obtained more than 40 marks
d).who have obtained 40 or less marks
e).in the range of 81 to 100
f).in the range of 61 to 80
g).in the range of 41 to 60
h).in the range of 0 to 40

The program should use minimum number of if statement.
*/

#include<stdio.h>
int main()
{
    int number;
    int count=0;
    int i;
    printf("How many students are there?\n");
    scanf("%d",&number);
    int num_array[number];
    printf("Enter the marks obtained by the students\n");
    for(i=0;i<number;i++)
    {
        scanf("%d",&num_array[i]);
    }
    int count80=0;
    int count60=0;
    int count40=0;
    int count40orLess=0;
    int count61to80=0;
    int count41to60=0;
    int count0to40=0;
    int count81to100;

    for(i=0;i<number;i++)
    {
        if(num_array[i]>80)
        {
            count80++;

        }
        if(num_array[i]>60)
        {
            count60++;
        }
        if(num_array[i]>40)
        {
            count40++;
        }
        else
        {
            count40orLess++;
        }
        count81to100= count80;

        if(num_array[i]>61 && num_array[i]<80  )
        {
            count61to80++;
        }
        if(num_array[i]>41 && num_array[i]<60  )
        {
            count41to60++;
        }
        count0to40 = count40orLess;
        
    }
    printf("The number of students who obtained more than 80 marks is %d\n",count80);
    printf("The number of students who obtained more than 60 marks is %d\n",count60);
    printf("The number of students who obtained more than 40 marks is %d\n",count40);
    printf("The number of students who obtained more than 40 or less marks is %d\n",count40orLess);
    printf("The number of students who obtained marks between 81 & 100 is %d\n",count81to100);
    printf("The number of students who obtained marks between 61 & 80 is %d\n",count61to80);
    printf("The number of students who obtained marks between 41 & 60 is %d\n",count41to60);
    printf("The number of students who obtained marks between 0 & 40 is %d\n",count0to40);
    return 0;
}