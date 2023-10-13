/*Temperature conversion problem
The program converts the given temperature in fahrenheit to celsius using the following conversion formula:

C= (F-32)/1.8
*/

#include<stdio.h>
#define F_LOW 0
#define F_MAX 250
#define STEP 25

int main()
{
    typedef float REAL;
    REAL fahrenheit , celsius;
    fahrenheit = F_LOW;
    printf("Fahrenheit Celsius \n\n");
    while ( fahrenheit <=F_MAX)
    {
        celsius=(fahrenheit - 32.00)/1.8;
        printf("%5.1f %7.2f\n",fahrenheit , celsius);
        fahrenheit= fahrenheit+STEP;
    }
    return 0;
    
}