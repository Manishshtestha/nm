/*
Algorithm
1. Start
2. Enter a function f, and its derivative df
3. Enter initial guess, a
4.Enter tolerance Value, tol
5. find first approx using formula 
    b= a-(f(a)/df(a))
6 Find |a-b|
7. if |a-b| > e, a=b adn goto step 5
else goto step 8
8. Display b as root
9. Terminate
*/
// Newtwon Raphson Method
#include<stdio.h>
#include<math.h>
float f(float x){
    return (cos(x)+2*sin(x)+x*x);
}
float df(float x){
    return (-sin(x)+ 2*cos(x)+2*x);
}
int main(){
    float a,tol,b;
    printf("Enter initial guess:");
    scanf("%f",&a);
    printf("Enter tolerance value:");
    scanf("%f",&tol);
    do{
        b=a;
        a=b-(f(b)/df(b));
    }while(fabs(a-b)>tol);
    printf("\nThe approximate root is %f\n",b);
    return 0;
}