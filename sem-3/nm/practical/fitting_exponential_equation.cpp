
#include<iostream>
#include<math.h>
using namespace std;
#define MAX 20

int main(){
    int i,n;
    float x[MAX],y[MAX],u[MAX];

    float sumx=0.0,sumu=0.0,sumxx=0.0,sumxu=0.0,xmean,umean,denom,a,b;
    //Reading data values 
    cout<<"Input the number of data points:";
    cin>>n;

    cout<<"Input x and y values (one set on each line):\n";
    for(i = 1; i<=n; i++){
        cin>>x[i]>>y[i];
    }

    for(i=1;i<=n;i++){
        u[i] = log(u[i]);
    }

    //computing constants a and b
    for(i = 1; i<=n; i++){
        sumx = sumx+x[i];
        sumu = sumu+u[i];

        sumxx = sumxx+x[i]*x[i];
        sumxu = sumxu+x[i]*u[i];

    }

    xmean = sumx/n;
    umean = sumu/n;

    denom = n*sumxx-sumx*sumx;
    b = (n*sumxu-sumx*sumu)/denom;
    a = exp(umean-b*xmean);

    cout<<"The line that is fit to the given data is y="<<a<<"e^"<<b<<"x"<<endl;
    return 0;
}
