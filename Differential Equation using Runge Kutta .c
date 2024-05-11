// Program to Solve differential equation using Fourth order Runge KUtta Method
#include <stdio.h>
#define F(x,y) (2*y)/x
void main(){
    float x,xp,x0,y0,y,h,m1,m2,m3,m4;
    printf("Enter initial values of x and y:");
    scanf("%f %f",&x0,&y0);
    printf("Enter the value of xp:");
    scanf("%f",&xp);
    printf("Enter the value of h:");
    scanf("%f",&h);
    x = x0;
    y = y0;
    for(x;x<xp;x+=h){
        m1 = F(x,y);
        m2 = F(x+0.5*h,y+0.5*h*m1);
        m3 = F(x+0.5*h,y+0.5*h*m2);
        m4 = F(x+h,y+h*m3);
        y += (m1+2*m2+2*m3+m4)*h/6;
    }
    printf("Solution by RK method = %f",y);
}