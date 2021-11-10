#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base class Default Constructor."<<endl;
        }
};
class Derived: public Base{
    public:
        Derived(){
            cout<<"Derived class Default Constructor."<<endl;
        }
};
class Child : public Derived{
    public:
        Child(){
            cout<<"Child class Default Constructor."<<endl;
        }
};

int main(){
    Base b;
    cout<<endl;
    Derived d;
    cout<<endl;
    Child c;
    return 0;
}
