#include<iostream>
using namespace std;

int gcd(int x,int y){
    if(x == 0) return y;
    else{
        return gcd(y % x, x);
    }
}

int main(){
    int a,b,g;
    char dec;

    do{
        cout<<"Enter a non negative integers a and b : ";
        cin>>a>>b;
        g = gcd(a,b);
        cout<<"The value of gcd ("<<a<<" , "<<b<<") is :"<<g<<endl;
        cout<<"Do you wnat to continue : Y or N ?";
        cin>>dec;
    }while(dec == 'Y' || dec =='y');
}
