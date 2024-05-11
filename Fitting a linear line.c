// Wap in c to fiz linear line
#include<stdio.h>
void main(){
    int n,i;
    float x[10], y[10],sx,sy,sx2,sxy,a,b;
    sx = sy = sxy = sx2 = 0;
    printf("How many data points:");
    scanf("%d",&n);
    printf("Enter %d data points for x and y:\n",n);
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    for(i=0;i<n;i++){
        sx += x[i];
        sy += y[i];
        sxy += x[i]*y[i];
        sx2 += x[i]*x[i];
    }
    b = ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    a = (sy/n)-(b*sx/n);
    printf("The fitted line is: y= %0.2f + %0.2fx",a,b);
}