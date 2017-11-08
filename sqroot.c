#include <stdio.h>

double sqroot(double x, double eps){
    double xi = 1;
    double xn = 0;
    xn = (xi + x/xi)/2.0;
    while((xi - xn) >= eps || (xi - xn) <= -eps){
        xi = xn;
        xn = (xi + x/xi)/2.0;
    }
    return xn;
}

int main() {
    double epsilon = 0;
    double x = 0;
    printf("%s","Введите эпсилон= ");
    scanf("%lf", &epsilon);
    if (epsilon == 0)
        printf("Эпсилон должен быть строго положительным\n");
    else {
        printf("Введите числа:\n");
        while(scanf("%lf", &x)){
            printf("%.10g\n",sqroot(x, epsilon));
        }
    }
 }
