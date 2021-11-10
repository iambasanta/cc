#include<iostream>
#include<math.h>
#define EPS 0.00001
using namespace std;

void horner(int n, float a[], float x0, float p[]){
    int i;
    p[0] = a[n], p[1] = a[n];
    for(i = n-1; i>=1; i--){
        p[0] = a[i]+p[0]*x0;
        p[1] = p[0]+p[1]*x0;
    }

    p[0] = a[0]+p[0]*x0;
}

int main(){
    float a[10],p[2],x0,x1;
    //p[0] and p[1] stores the value of the polynomial and its derivative at x0 respectively
    int i,n,count = 1;
    cout<<"Enter the degree of polynomial :";
    cin>>n;
    cout<<"Enter the coefficients for the polynomial starting from the highest degree :";
    for(i = n; i>=0; i--){
        cin>>a[i];
    }

    cout<<" Enter a valid initial point :";
    cin>>x0;

    horner(n,a,x0,p);
    x1 = x0-(p[0]/p[1]);

    while(fabs((x1-x0)/x1)>EPS){
        count ++;
        x0 = x1;
        horner(n,a,x0,p);
        x1 = x0-(p[0]/p[1]);
    }

    cout<<"The approximate root of given function is :"<<x1<<"with "<<count<<"number of iterations.";

    return 0;
}
