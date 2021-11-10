//
#include<iostream>
using namespace std;
#define MAX 15

int main(){

    int n;
    float x[MAX],f[MAX],fp,If,sum,xp;
    char decision;
    cout<<"Input the numbe of data pairs :";
    cin>>n;

    cout<<"Input data pairs x(i) and values of f(i) (one set in each line): \n";

    for(int i = 0; i<n; i++){
        cin>>x[i]>>f[i];
    }

    do{
        cout<<"Input x at which interpolation is required :";
        cin>>xp;

        sum = 0.0;
        for(int i = 0; i<n; i++){
            If = 1.0;
            for(int j = 0; j<n; j++){
                if(i!=j){
                    If = If*(xp-x[j])/(x[i]-x[j]);
                }
                sum = sum+If*f[i];
            }
        }
        fp = sum;
        cout<<"Interpolated function value at x = "<<xp<<" is "<<fp;
        cout<<"Do you want to continue ? (Y/N) :";
        cin>>decision;

    }while(decision == 'y' || decision == 'Y');

    return 0;
}


/*
    x: -1 -2 2 4
    f: -1 -9 11 69

    x = 0,-3,6
    1,-29,223
  */
