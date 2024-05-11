// Program to integrate a function using Trapezoidal rule
#include<stdio.h>
#include<math.h>
#define F(x) (exp(x))
int main()
{
	float h,x1,x2,I,f1,f2;
	printf("Enter lowe limit and upper limit\n");
	scanf("%f%f",&x1,&x2);
	h = x2-x1;
	f1 = F(x1);
	f2 = F(x2);
	I = (f1+f2)*h/2;
	printf("Integeration by Trapezoidal Rule =  %f",I);	
}