#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    double pnomial;
    double derivative;
    double x;
    double n;
    int i;
    while (scanf("%lf",&n) == 1)
    {
        if(i == 0) x = n;
        else {
            derivative = derivative * x + pnomial;
            pnomial = pnomial * x + n;
        }
        i++;
    }
    printf("%f\n", pnomial);
    printf("%f\n", derivative);
}
