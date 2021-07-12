#include<iostream>
using namespace std;
#define MAX 15

int main(){
    float x[MAX],fx[MAX],fd[MAX],xp,s,h,v,p;
    int n,i,j;
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
        s=(xp-x[1])/h;
        p = 1;
        v = fx[1];
        for(i = 1; i<=n; i++){
            fd[i] = fx[i];
        }
        for(i = 1; i<=n; i++){
            for(j = 1 ; j<=n; j++){
                fd[j] = fd[j+1]-fd[j];
            }
            p = p*(s-i+1)/i;
            v = v+p*fd[1];
        }
        cout<<"Interpolated function value at x = "<<xp<<" is "<<v;
        cout<<"\nDo you want to continue ? (Y/N) :";
        cin>>decision;

    }while(decision == 'y' || decision == 'Y');

    return 0;
}
