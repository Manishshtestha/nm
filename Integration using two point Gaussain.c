// LAB11 : WAP inc to find integration using two point Gaussain Integration
#include <stdio.h>
#include<math.h>
#define F(x) (exp(x))

int main(){
    float x1=-0.5786,x2=0.5786,f1,f2,w1=1,w2=1,I;
    f1 = F(x1);
    f2 = F(x2);
    I = w1*f1+w2*f2;
    printf("The integral of the function from %f to %f is: %.4f\n",x1,x2,I);

}