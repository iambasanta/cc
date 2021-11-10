#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(){
        cout<<"Default constructor called."<<endl;
    }
    A(int a, int b){
        cout<<"Parameterized constructor called."<<endl;
        x = a;
        y = b;
    }
    A(const A &old){
        x = old.x;
        y = old.y;
        cout<<"Copy constructor is called."<<endl;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    A a(10,20);
    A b(a);
    b.print();
    return 0;
}
