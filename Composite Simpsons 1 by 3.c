#include <stdio.h>
#include <math.h>
#define f(x) log10(x)
void main() {
    float a = 1, b = 5; // Integration limits
    int n = 8; // Number of sub-intervals
    float h = fabs(b - a) / n; // Step size
    float ifx = f(a) + f(b);
    // Calculate the integral
    for (float i = a + h; i < b; i += 2 * h) {
        ifx += 4 * f(i);
    }
    for (float i = a + 2 * h; i < b; i += 2 * h) {
        ifx += 2 * f(i);
    }
    ifx *= h / 3;
    printf("The integral of the equation using Composite Simpson's 1/3rd Rule is %.5f\n", ifx);
}
