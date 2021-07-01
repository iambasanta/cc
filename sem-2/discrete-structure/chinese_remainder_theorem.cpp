#include<iostream>
#include<math.h>
#define max 10
using namespace std;
int inv(int a,int b){
    int s1=0,s2=1,t1=1,t2=0;
    int q,r,s,t;
    while(b!= 0){
         q=a/b;                                                                        
         r=a%b;                                                              
         s=s2-(q*s1);                                                        
         t=t2-(q*t1);                                                        
         a=b;                                                                
         b=r;                                                                
         s2=s1;                                                              
         s1=s;                                                               
         t2=t1;                                                              
         t1=t; 
   }
    return s2;
}

int main(){
    int a[max],m[max],n,mx[max],s[max],M=1;
    char dec;
    do{
    cout<<"No of equations : ";
    cin>>n;
    cout<<"Enter values ..."<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Enter a : ";
        cin>>a[i];
        cout<<"Enter m : ";
        cin>>m[i];
    }
    for(int i = 0;i<n;i++){
        M = M* m[i];
    }
    for(int i = 0;i<n;i++){
        mx[i] = M / m[i];
    }
    for(int i = 0; i<n; i++){
        s[i] = inv(mx[i],m[i]);
    }
    int x = 0;

    for(int i = 0; i<n; i++){
        x = x + a[i] * mx[i] * s[i];
        x = x % M;
    }
    cout<<"The solution of the given system of equation is :"<<x<<" "<<M;

    cout<<"\nDo you want to continue. Y/N"<<endl;
    cin>>dec;
    }while(dec == 'y' || dec=='Y');

    return 0;
}
