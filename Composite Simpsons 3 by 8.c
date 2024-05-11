#include <stdio.h>
#include <math.h>
#define f(x) 1/(1+x*x)
void main() {
    float a = 0, b = 1; // Integration limits
    int n = 100; // Number of sub-intervals
    float h = (b - a) / n; // Step size
    float integral = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        if (i % 3 == 0) {
            integral += 2 * f(x);
        } else {
            integral += 3 * f(x);
        }
    }
    integral *= h * 3 / 8;
    printf("The integral of the equation using Simpson's 3/8 Rule is %.5f\n", integral);
}
