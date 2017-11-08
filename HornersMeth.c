#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    double polynom=0;
    double x=0;
    double n;
    int i=0;
    while (scanf("%lf",&n) == 1)
    {
        if(i == 0) x = n;
        else polynom = polynom * x + n;
        i++;
    }
    printf("%f\n", polynom);

}
