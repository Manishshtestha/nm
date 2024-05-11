// Program to find the Derivative using three point formula
#include<stdio.h>
#define F(x) (x*x+2*x+1)
int main()
{
	float xi,x1,x2,h,f1,f2,d;
	printf("Enter value xi and h\n");
	scanf("%f%f",&xi,&h);
	f1 = F(xi);
	x1 =  xi+h;
	x2 =  xi-h;
	f1 =  F(x1);
	f2 =  F(x2);
	d = (f1-f2)/(2*h);
	printf("The derivate of a function at %f  =  %f\n",xi,d);	
}