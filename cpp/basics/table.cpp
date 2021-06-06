#include<iostream>
using namespace std;
int main(){
    int n,product = 0;
    cout<<"Enter your number you want to make a table of :"<<endl;
    cin>>n;
    cout<<"Table of "<<n<<endl;
    for(int i =1; i<=10; i++){
        product = n * i;
        cout<<n<<" X "<<i<<" = "<<product<<endl;
    }
}
