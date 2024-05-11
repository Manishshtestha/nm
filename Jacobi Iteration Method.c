// Program to solve the system of linear equation using Jacobi Iteration method
// 20x+y-2z=17,3x+20y-z=-18,2x-3y+20z=25
#include <stdio.h>
#include <math.h>

#define E 0.0001
#define F1(x, y, z) (17 - y + 2 * z) / 20
#define F2(x, y, z) (-18 - 3 * x + z) / 20
#define F3(x, y, z) (25 - 2 * x + 3 * y) / 20

int main()
{
    float x0, y0, z0, x1, y1, z1, e1, e2, e3;
    x0 = y0 = z0 = 0;
    int itr = 1;
    while (1)
    {
        x1 = F1(x0, y0, z0);
        y1 = F2(x0, y0, z0);
        z1 = F3(x0, y0, z0);
        
        // printf("x1 = %f\n", x1);
        // printf("x2 = %f\n", y1);
        // printf("x3 = %f\n", z1);
        itr++;
        e1 = fabs(x1 - x0);
        e2 = fabs(y1 - y0);
        e3 = fabs(z1 - z0);
        if (e1 < E && e2 < E && e3 < E)
            break;
        x0 = x1;
        y0 = y1;
        z0 = z1;
    }
    printf("Iterations: %d\n", itr);
    printf("Solution:\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", y1);
    printf("x3 = %f\n", z1);
}