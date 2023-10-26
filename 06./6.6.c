/*Write a program to evaluate the following investment equation V=P(1+r)^n and print the tables
which would give the value of V for various combinations of the following values of P,r, and n.

P: 1000,2000,3000,.....,10000
r:0.10,0.11,0.12,.......,0.20
n:1,2,3,....,10
(Hint: P is the principal amount and v is the value at the end of the n years . 
This equation can be recursively written as)

V=P(1+r)
P=V
This is, the value of money at the end of first year becomes the principal amount fot the next 
year and so on .
*/
#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n;

    printf("P      r      n      V\n");
    printf("-----------------------\n");

    for (P = 1000; P <= 10000; P += 1000) {
        for (r = 0.10; r <= 0.20; r += 0.01) {
            for (n = 1; n <= 10; n++) {
                V = P * pow(1 + r, n);
                printf("%.2f   %.2f   %d   %.2f\n", P, r, n, V);
            }
        }
    }

    return 0;
}