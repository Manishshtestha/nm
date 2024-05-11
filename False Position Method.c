// LAB 4
// Program to find roots using False Position Method
#include <stdio.h>
#include <math.h>
#define E 0.00001
#define F(x) pow(x,3)-x-2
void main(){
    float x1,x2,x0,f1,f2,f0,r,e;
    int itr = 1;
    printf("Enter inital Guesses:");
    scanf("%f %f",&x1,&x2);
    f1 = F(x1);
    f2 = F(x2);
    if(f1*f2>0) printf("Root doesn't belong to the (%2f,%2f)\n",x1,x2);
    else{
        while(1){
            x0 = x1 - f1*(x2-x1)/(f2-f1);
            // printf("Iteration %d\t",itr);
            // printf("x0 = %f\n",x0);
            f0 = F(x0);
            e = fabs(F(x0));
            if(f1*f0<0){
                x2 = x0;
                f2 = f0;
            }else{
                x1 = x0;
                f1 = f0;
            }
            if(e<E){
                r = x0;
                break;
            }
            itr++;
        }
        printf("Root = %f\n",r);
        printf("Number of Iterations=%d\n",itr);

    }
}