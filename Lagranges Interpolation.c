// Program to interpolate given data set using Lagrange's Interpolation
#include<stdio.h>
#include<math.h>
void main(){
    float x[10],y[10],xp,yp=0,p;
    int i,j,n;
    printf("Enter the number of points:");
    scanf("%d",&n);
    printf("\nEnter X and Y values:\n");
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    printf("\nEnter the value of X for which y is to be found:");
    scanf("%f",&xp);
    for(i=0;i<n;i++){
        p=1;
        for(j=0;j<n;j++){
            if(i!=j) p = p*(xp-x[j])/(x[i]-x[j]);
        }
        yp += p*y[i];
    }
    printf("Interpolated value = %f",yp);
}