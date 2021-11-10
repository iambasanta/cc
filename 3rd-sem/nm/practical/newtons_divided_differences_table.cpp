#include<iostream>
using namespace std;
#define max 15

int main(){
    int i,j,k,n;
    float x[max],f[max],a[max],d[max][max],xp,dif,sum,p;
    char q;
    cout<<"Input number of data points :";
    cin>>n;
    cout<<"Input values of x and f(x) one set on each line :";
    cin>>x[i],f[i];
    for(i = 1; i<=n; i++){
        d[i][1] = f[i];
    }
    for(j = 2; j<=n; j++){
        for(i = 1; i<=n-j+1; i++){
            d[i][j] = (d[i+1][j-1] - d[i][j])/(x[i+j-1]-x[i]);
        }
    }
    for(j = 1; j<=n; j++){
        a[j] = d[1][j];
    }

    do{
        cout<<"Input xp where derivative is required :";
        cin>>xp;
        dif = a[2];
        for(k = 3; k<=n; k++){
            sum = 0.0;
            for(i = 1; i<=k-1; i++){
                p = 1.0;
                for(j = 1; j<=k-1; j++){
                    if(i != j)
                        p = p*(xp-x[j]);
                }
                sum = sum +p;
            }
            dif = dif+a[k]*sum;
        }

        cout<<"Derivative at x = "<<xp<<"is "<<dif;
        cout<<"Do you want to input another value ? Y/N";
        cin>>q;
    }while(q == 'Y' || 'y');

    return 0;
}

/* 
 * x: 2 3 5  6
 * f: 3 7 21 31
 * xp = 4.1
 * ans = 7.2
*/

