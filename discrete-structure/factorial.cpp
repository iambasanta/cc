
#include<iostream>
using namespace std;

long factorial(int n){
    if(n == 0) return 1;
    else return n*factorial(n-1);
}

int main(){
    int n;
    long fact;
    char dec;
    do{
        cout<<"Enter a non negative integer : ";
        cin>>n;
        fact = factorial(n);
        cout<<"The factorial of "<<n<<" is :"<<fact<<endl;
        cout<<"Do you want to continue ? Y/N : ";
        cin>>dec;
    }while(dec == 'Y' || dec =='y');

    return 0;
}
