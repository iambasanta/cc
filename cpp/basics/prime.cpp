#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number to check :"<<endl;
    cin>>n;
    bool isPrime = true;
    for(int i =2; i*i <=n; i++){
        if(n%i ==0){
            isPrime = false;
            break;
        }
    }
    if(n<2){
        isPrime = false;
    }
    cout<<n<<" is prime ?"<<endl;
    if(isPrime == false){
        cout<<"No!!"<<endl;
    }else{
        cout<<"Yes."<<endl;
    }
    return 0;
}
