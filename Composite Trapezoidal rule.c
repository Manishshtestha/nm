// Composite Trapezoidal rule
#include <stdio.h>
#include <math.h>
// Define the function to be integrated
#define f(x) x*x
int main() {
    int n = 100; // Number of sub-intervals
    float a = 1, b = 4; // Integration limits
    float h = (b - a) / n; // Step size
    float sum = 0;
    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        sum += f(x);
    }
    float integral = (h / 2) * (f(a) + f(b) + 2 * sum);
    printf("The integral is: %lf\n", integral);
    return 0;
}
