#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter value of n :"<<endl;
    cin>>n;
    for(int i = n; i>0; i--){
        for(int j=n; j>=i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
