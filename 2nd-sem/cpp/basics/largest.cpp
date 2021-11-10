//Wap to compare three numbers inputed from user and find thelargest among them.
#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3,large;
    cout <<"Enter your first number :"<<endl;
    cin>>n1;
    cout <<"Enter your second number :"<<endl;
    cin>>n2;
    cout <<"Enter your third number :"<<endl;
    cin>>n3;

    if(n1 > n2 && n1> n3){
        cout<<"The largest is "<<n1<<endl;
    }else if( n2>n1 && n2> n3){
        cout <<"The largest is "<<n2<<endl;
    }else{
        cout <<"The largest is "<<n3<<endl;
    }

}