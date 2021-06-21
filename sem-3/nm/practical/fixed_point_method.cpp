// fixed-point iteration method to calculate root of non linear equation
#include<iostream>
#include<math.h>
#define EPS 0.00001
using namespace std;

float g(float x){
    return 5+0.5*sin(x);
}

int main(){
    float a,b;
    int n = 1;

    cout<<"Enter an initial point a : ";
    cin>>a;

    b = g(a);
    while(fabs((b-a)/b)>EPS){
        n++;
        a = b;
        b = g(a);
        if(g(b) == b) break;
    }

    cout<<"The approximate root of the given function is :"<<b<<" with "<<n<<" no of iterations.";

    return 0;
}

// input a = 5
// output 4.51019
