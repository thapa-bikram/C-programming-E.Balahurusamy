/*Given the radius of a circle ,
 write a program to compute and display its area .
  Use symbolic constant to define the Pi value and 
  assume a suitable value for radius.*/

  #include<stdio.h>
  #define PI 3.14
  int main ()
  {
    int rad;
    printf("Enter radius \t");
    scanf("%d",&rad);
    printf("The area of circle is %f ",2*PI*rad);
    return 0;
    
  }