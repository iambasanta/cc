// approximation of root of none linear equation using Secant Method
#include<iostream>
#include<math.h>
#define EPS 0.00001
using namespace std;

float f(float x){
    //write function 
    return x*x*x-3*x+1;
}

int main(){
    float a,b,c;
    int n=0;

    do{
        cout<<"Enter one point for interval :";
        cin>>a;
        cout<<"Enter another point for interval :";
        cin>>b;
    }while(f(a)==f(b));

    do{
        n++;
        c = (a*f(b)-b*f(a))/f(b)-f(a);
        if(f(c) == 0) break;
        a = b;
        b = c;
    }while(fabs((b-a)/b)>EPS);

    cout<<"The approximation root of given function is "<<c<<" with "<<n<<" number of itetrations.";

    return 0;
}
