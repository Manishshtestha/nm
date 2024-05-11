#include <stdio.h>
#define f(x, y) (x + y)
int main() {
    float x0 = 0, y0 = 2, xn = 1, h, yn;
    int n = 10; // Number of steps
    h = (xn - x0) / n; // Step size
    for (int i = 0; i < n; i++) {
        yn = y0 + h * f(x0, y0);
        x0 += h;
        y0 = yn;
    }
    printf("Value of y at x = %0.2f is %0.3f\n", xn, yn);
    return 0;
}
