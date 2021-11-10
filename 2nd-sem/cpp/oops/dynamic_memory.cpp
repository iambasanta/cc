#include<iostream>
using namespace std;
int main(){
    int* myPointer;
    myPointer = new int;

    *myPointer = 100;
    cout<<"After allocation :"<<endl;
    cout<<*myPointer<<endl;

    delete myPointer;
    cout<<"After deallocation :"<<endl;
    cout<<*myPointer<<endl;

    return 0;
}
