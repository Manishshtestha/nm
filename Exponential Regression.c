// Wap in c to fiz exponentail model to given data set
#include<stdio.h>
void main(){
    int n,i;
    float x[10], y[10],sx,slogy,sx2,sxy,a,b,r;
    sx = slogy = sxy = sx2 = 0;
    printf("How many data points:");
    scanf("%d",&n);
    printf("Enter %d data points for x and y:\n",n);
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    for(i=0;i<n;i++){
        sx += x[i];
        slogy += log(y[i]);
        sxy += x[i]*log(y[i]);
        sx2 += x[i]*x[i];
    }
    b = ((n*sxy)-(sx*slogy))/((n*sx2)-(sx*sx));
    r = (slogy/n)-(b*sx/n);
    a = exp(r);
    printf("The fitted exponential curve is: y= %0.2fe^%0.2fx",a,b);
}