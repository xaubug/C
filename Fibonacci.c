#include <stdio.h>
#include <string.h>
int i;
int x;
int x1;
int x0;
int fIteration(int x){
    x1 = 1;
    x0 = 0;
    i = 0;
    while(i < x - 1){
        i++;
        x1 = x1 + x0;
        x0 = x1 - x0;
    }
    return x1;
}
int fRecursion(int x){
    if(x == 0) return 0;
    else if(x == 1) return 1;
    return fRecursion(x - 1) + fRecursion(x - 2);
}
int main(int argc, char *argv[]){
    while(scanf("%d", &x) == 1){
        printf("%d\n", fRecursion(x));
        printf("%d\n", fIteration(x));
    }

}
