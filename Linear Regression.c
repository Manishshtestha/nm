// Linear Regression
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void linearRegression(int n, float *x, float *y, float *slope, float *intercept) {
    float sumx = 0, sumy = 0, sumxsq = 0, sumxy = 0;
    for (int i = 0; i < n; i++) {
        sumx += x[i];
        sumxsq += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
    }
    float d = n * sumxsq - sumx * sumx;
    *slope = (n * sumxy - sumx * sumy) / d;
    *intercept = (sumy * sumxsq - sumx * sumxy) / d;
}

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    float *x = malloc(n * sizeof(float));
    float *y = malloc(n * sizeof(float));
    float slope, intercept;
    printf("Enter the x and y values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f%f", &x[i], &y[i]);
    }
    linearRegression(n, x, y, &slope, &intercept);
    printf("Slope: %f\nIntercept: %f\n", slope, intercept);
    free(x);
    free(y);

    return 0;
}
