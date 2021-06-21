// approximation of root of non linear equestion using bisecion method
#include<iostream>
#include<math.h>
#define EPS 0.0001
using namespace std;

float f(float x){
    return x*x*x-2*sin(x);
}
int main(){

    float a,b,c;
    int n=0;

    do{
        cout<<"Enter two valid initial points : ";
        cin>>a>>b;
    }while(f(a)*f(b)>=0);

    do{
        n++;
        c = (a+b)/2;
        if(f(c) == 0) break;
        if(f(a)*f(c)<0) b = c;
        else a = c;
    }while(fabs((b-a)/a)>EPS);
    cout<<"The approximation root of given function is "<<c<<" with "<<n<<" number of itetrations.";
    return 0;
}

/* 
//write it like this in labsheet.
INPUT:
 f(x) = x^3-2sin(x)
 a = 0.5,b = 2,EPS = 0.00001

OUTPUT:
    Approximation c = .......... No of itetrations n = ...
 */
