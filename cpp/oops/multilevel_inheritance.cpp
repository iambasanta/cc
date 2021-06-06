// wap to demostrate multilevel inheritance
#include<iostream>
using namespace std;

class Vechile{
    public: int x = 4;

   Vechile(){
       cout<<"vechile has "<<x<<" wheels.";
   } 
};

class Car: public Vechile{

};
 class Truck: public Vechile{
 };

int main(){
    Car c;
    cout<<"\n";
    Truck t;
    return 0;
}
