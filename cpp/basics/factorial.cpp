#include<iostream>
using namespace std;
int main(){
    int n,factorial = 1;
    cout<<"Enter the number you want to find a factorial of :"<<endl;
    cin>>n;
    for(int i = n; i >=1; i--){
        factorial *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<factorial<<endl;
    return 0;
}