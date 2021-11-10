//interpolation using newtons method
#include<iostream>
using namespace std;
#define MAX 15

int main(){
    int i,j,n;

    float xp,fp,sum,pi,x[MAX],f[MAX],a[MAX],d[MAX][MAX];

    char decision;

    cout<<"Input the number of data pairs :";
    cin>>n;

    cout<<"Input the data pairs x(i) and values f(i) (one set in each line ):\n";
    cout<<n;
    for(i = 1; i<=n; i++){
        cin>>x[i]>>f[i];
    }

    //construct divided difference table
    for(i = 1; i<=n; i++){
        d[i][1] = f[i];
    }
        for(j = 2;j<=n;j++){
            for(i = 1; i<=n-j+1;i++){
                d[i][j] = (d[i+1][j-1] - d[i][j-1])/(x[i+j-1]-x[i]);
            }
        }

    //set the coefficient of interpolation polynomial
    for(j = 1; j<n; j++){
        a[j] = d[1][j];
    }
    
    // compute interpolation value
    do{
        cout<<"Input x at which interpolation in required :";
        cin>>xp;
        sum = a[1];
        for(i = 2; i<=n; i++){
            pi = 1.0;
            for(j = 1; j<=i-1; j++){
                pi = pi*(xp-x[j]);
                sum = sum+a[i]*pi;
            }
        }

            fp = sum;
            //write results
            cout<<"Interpolated function value at x = "<<xp<<" is "<<fp;
            cout<<"Do you want to continue ? Y/N ?";
            cin>>decision;
    }while(decision == 'y' || decision == 'Y');

    return 0;
}
