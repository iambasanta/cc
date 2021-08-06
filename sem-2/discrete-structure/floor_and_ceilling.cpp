#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a;
    char decision;
    do{
    cout<<"Enter your number : ";
    cin>>a;
    cout<<"Ceilling of "<<a<<" is : "<<ceil(a)<<endl;
    cout<<"Floor of "<<a<<" is : "<<floor(a)<<endl;
    cout<<"Do you want to continue ? Press Y/N: ";
    cin>>decision;
    }while(decision =='Y' || decision =='y');
    return 0;
}
