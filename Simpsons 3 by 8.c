// Integration of a function using Simpsong's 3/8 rule
#include<stdio.h>
#include<math.h>
#define F(x) (exp(x))
int main()
{
	float h,x0,x1,x2,x3,xn,I,f0,f1,f2,f3;
	printf("Enter lowe limit and upper limit\n");
	scanf("%f%f",&x0,&xn);
	h = (xn-x0)/3;
	x1 =  x0+1*h;	
	x2 =  x0+2*h;
	xn =  x0+3*h;
	f0 = F(x0);
	f1 = F(x1);
	f2 = F(x2);
	f3 = F(xn);
	I = 3*h*(f0+3*f1+3*f2+f3)/8;
	printf("Integeration by Simpson 3/8 Rule =  %f",I);	
}