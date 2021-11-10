#include<iostream>
#include<math.h>
#define max 20
using namespace std;
int main(){
    int a[max],b[max],s[max],n;
    char q;
    do{
        int i,c,d;
        cout<<"Enter the length of bit string :";
        cin>>n;
        cout<<"Enter first bit string, one bit at a time :";
        for(i=n-1;i>=0;i--){
            cin>>a[i];
        }
        cout<<"Enter second bit string, one bit at a time :";
        for(i=n-1;i>=0;i--){
            cin>>b[i];
        }
        c = 0;
        for(i=0;i<=n-1;i++){
            d = floor((a[i]+b[i]+c)/2);
            s[i] = a[i]+b[i]+c-(2*d);
            c = d;
        }
        s[n]=c;
        cout<<"The sum of the bit strings is :";
        for(i=n;i>=0;i--){
            cout<<s[i];
        }
        cout<<"\nDo you want to continue. Y/N"<<endl;
        cin>>q;
    }while(q == 'y' || q=='Y');
    return 0;
}
