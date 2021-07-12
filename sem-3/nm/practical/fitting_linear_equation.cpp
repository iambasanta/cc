#include<iostream>
using namespace std;
#include<math.h>
#define MAX 20

int main(){
    int i,n;
    float x[MAX],y[MAX];

    float sumx=0.0,sumy=0.0,sumxx=0.0,sumxy=0.0,xmean,ymean,denom,a,b;
    //Reading data values 
    cout<<"Input the number of data points:"; cin>>n;
    cout<<"Input x and y values (one set on each line):\n";
    for(i = 1; i<=n; i++){
        cin>>x[i]>>y[i];
    }

    //computing constants a and b
    for(i = 1; i<=n; i++){
        sumx = sumx+x[i];
        sumy = sumy+y[i];

        sumxx = sumxx+x[i]*x[i];
        sumxy = sumxy+x[i]*y[i];

    }

    xmean = sumx/n;
    ymean = sumy/n;

    denom = n*sumxx-sumx*sumx;
    b = (n*sumxy-sumx*sumy)/denom;
    a = ymean-b*xmean;
    cout<<"The line that is fit to the given data is y="<<a<<"+"<<b<<"x"<<endl;
    return 0;
}

// input
// x 4 7 11 13 17
// y 2 0 2  6   7

//output
//y=-1.65891+0.486434x
