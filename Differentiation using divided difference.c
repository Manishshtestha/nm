// Divided Difference for differentiating the function
#include <stdio.h>
#define MAX_SIZE 10
float dividedDiff(float x[], float y[],int n)
{
    float diff[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; i++)
    {
        diff[i][0] = y[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            diff[j][i] = (diff[j][i - 1] - diff[j + 1][i - 1]) / (x[j] - x[i + j]);
        }
    }
    return diff[0][n - 1];
}
void main()
{
    int n = 4;
    float x[] = {5, 6, 9, 11};
    float y[] = {12, 13, 14, 16};
    printf("Derivative at x = 7 is %f\n", dividedDiff(x, y, n));
}
