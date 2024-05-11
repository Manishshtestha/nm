//Program to find roots using Fixed Point Method
#include <stdio.h>
#include <math.h>
#define E 0.0001
#define f(x) (3 * x - cos(x) - 1)
#define g(x) ((1 + cos(x)) / 3);
int main(){
    float x0, x1, r, e;
    int itr = 1;
    printf("Enter initial guess: ");
    scanf("%f", &x0);
    while (1){
        x1 = g(x0);
        printf("Iteration = %d\n", itr);
        printf("x1 = %f\n", x1);
        e = fabs(x1 - x0);
        if (e < E){
            r = x1;
            break;
        }
        x0 = x1;
        itr++;
    }
    printf("The root = %f\n", r);
    printf("f(%f) = %f", r, f(x1));
    return 0;
}