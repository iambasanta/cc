#include<iostream>
using namespace std;
int x;
int& retByref(){
    cout<<"returning by reference."<<endl;
    return x;

}

int main(){
    retByref() = 100;
    cout<<x;
    return 0;
}
