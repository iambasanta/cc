// newton raphson method to calculate the root of the function 
#include<iostream>
#include<math.h>
#define EPS 0.000001
using namespace std;

float of(float x){
    return x*sin(x)+cos(x);

}

float df(float x){
    return x*cos(x);

}

int main(){
    float a,b;
    int n =1;

    do{
        cout<<"Enter a valid  point :";
        cin>>a;
    }while(df(a) == 0);

    b = a-(of(a)/df(a));
    while(fabs((b-a)/b)>EPS){

        n++;
        a = b;
        b = a-(of(a)/df(a));
        if(of(a) == 0) break;
    }
    
    cout<<"The approximate root of given function is "<<b<<" with "<<n<<" number of itetrations.";

    return 0;
}
