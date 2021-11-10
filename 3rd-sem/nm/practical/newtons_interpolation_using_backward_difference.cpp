#include<iostream>
using namespace std;
#define MAX 15

int main(){
    
    float x[MAX],fx[MAX],bd[MAX],xp,s,h,v,p;
    int n,i,j,k;
    char decision;

    cout<<"Input the number of data pairs :";
    cin>>n;

    cout<<"Enter the data pairs x[i] and values f[i] (one set in each line.) :";
    for(i = 1; i<=n; i++){
        cin>>x[i]>>fx[i];
    }

    h = x[2]-x[1];

    do{
        cout<<"Enter the value at which interpolation is required :";
        cin>>xp;
        s=(xp-x[n])/h;
        p = 1;
        v = fx[n];
        for(i = 1; i<=n; i++){
            bd[i] = fx[i];
        }
        for(i = n,k=1; i>=1,k<n ;i--,k++){
            for(j = n ; j>=n-i; j--){
                bd[j] = bd[j]-bd[j-1];
            }
            p = p*(s+k-1)/k;
            v = v+p*bd[n];
        }
        cout<<"Interpolated function value at x = "<<xp<<" is "<<v;
        cout<<"\nDo you want to continue ? (Y/N) :";
        cin>>decision;

    }while(decision == 'y' || decision == 'Y');

    return 0;
}
