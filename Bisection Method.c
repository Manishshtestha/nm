#include <stdio.h>
#include <math.h>
float func(float x)
{
    return pow(x, 3) - x - 2;
}
float bisection(float l, float r)
{
    float mid = (l + r) / 2;
    while (fabs(func(mid)) >= 1e-6)
    {
        if (func(mid) * func(l) < 0) r = mid;
        else l = mid;
        mid = (l + r) / 2;
    }
    return mid;
}
int main()
{
    float root = bisection(1, 2);
    printf("The root of the function is approximately: %.6f\n", root);
    return 0;
}