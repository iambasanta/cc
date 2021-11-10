#include<iostream>
using namespace std;
#define max 20;
#include<math.h>

void normal(float x[max],float y[max],float c[max][max],float b[max],int n, int m){
    int i,j,l1,l2;
    for(j = 1; j<=m; j++){
        for(k = 1; k<=m; k++){
            c[j][k] = 0.0;
            l1 = k+j;
            for(i = 1; i<=n; i++){
                 c[j][k] = c[j][k]+pow(x[i],l1);
            }
        }
    }

    for(j = 1;j<=m;j++){
        b[j]=0.0;
        l2=j-1;
        for(i =1; i<=n; i++){
            b[j] = b[j]+y[i]*pow(x[i],l2);
        }
    }
    return;
}

void gauss(int n,float a[max][max],float b[max],float x[max]){
    int i,j,k;
    float pivot,factor,sum;
    for(k = 1; k<=n-1; k++){
        pivot = a[k][k];
    }

    for(i = k+1; i<=n;i++){
        factor = a[i][k]/pivot;
    }

    for(j=k+1;j<=n;j++){
        a[i][j] = a[i][j]-factor*a[k][j];
        b[i] = b[i]-factor*b[k];
    }
}


