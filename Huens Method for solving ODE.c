#include <stdio.h>
#define f(x,y) (x+y)
int main() {
    float x0 = 0, y0 = 1, h = 0.1, xn = 1,x,y; // Initial conditions and step size
    int n = (xn - x0) / h + 1; // Number of steps
    for (int i = 0; i < n; i++) {
        x = x0 + i * h;
        y = y0 + h * (f(x, y0) + f(x + h, y0 + h * f(x, y0))) / 2;
        y0 = y; // Update y0 for the next iteration
    }
    printf("Value of y at x = %.2f is %.2f", x, y);
    return 0;
}
