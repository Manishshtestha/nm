// Program to integrate a function using simpson's 1/3 rule

#include<stdio.h>
#include<math.h>
#define F(x) (exp(x))
int main()
{
	float h,x0,x1,xn,I,f0,f1,f2;
	printf("Enter lower limit and upper limit");
	scanf("%f%f",&x0,&xn);
	h = (xn-x0)/2;
	x1 =  x0+1*h;	
	xn =  x0+2*h;
	f0 = F(x0);
	f1 = F(x1);
	f2 = F(xn);
	I = (f0+4*f1+f2)*h/3;
	printf("Integration by Simpson 1/3 Rule =  %f",I);	
}