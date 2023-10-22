/*Admission to a professional course is subject to the following conditions:
a).Marks in Mathematics>=60
b).Marks in Physics>=50
c).Marks in Chemistry >= 40
d).Total in all three subjects >= 200
or
Total in Mathematics and Physics >=150
*/
#include<stdio.h>
int main()
{
    float numPhysics,numChemistry,numMathematics;
    float totalInAllThree,totalInMathAndPhysics;
    printf("Enter the marks in\t Mathematics\t Physics \t Chemistry\n");
    scanf("%f%f%f",&numPhysics,&numChemistry,&numMathematics);
    totalInAllThree = numPhysics+numChemistry+numMathematics;
    totalInMathAndPhysics=numPhysics+numMathematics;
    if((numPhysics>=50 && numChemistry>=40 && numMathematics>=60 )&&(totalInAllThree>=200)||(totalInMathAndPhysics>=150))
    {
        printf("Eligible for admission\n");
    }
    else{
        printf("Not eligible for admission\n");
    }
    return 0;
}