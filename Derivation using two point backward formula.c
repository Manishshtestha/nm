// Program to find derivative of a function using two point backward formula
#include<stdio.h>
#define F(x) (x*x+2*x+1)
int main()
{
	float xi,x1,h,f1,f2,d;
	printf("Enter value xi and h\n");
	scanf("%f%f",&xi,&h);
	f1 = F(xi);
	x1 =  xi-h;
	f2 = F(x1);
	d = (f1-f2)/h;
	printf("The derivate of a function at %f  =  %f\n",xi,d);
}