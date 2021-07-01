#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a,d,q,r;
    char dec;
    do{
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter positive integer d:";
    cin>>d;

    q = 0;
    r = abs(a);

    while(r>=d){
        r = r-d;
        q +=1;
    }
    if(a<0){
        if(r>0){
            r = d-r;
            q = -(q+1);
        }else if(r = 0){
            q = -q;
        }
    }
    cout<<q<<" is the quotient and "<<r<<" is the remainder ."<<endl;

    cout<<"Do you want to continue : Y/N ";
    cin>>dec;
    }while(dec == 'y' || dec == 'Y');
    return 0;
}
