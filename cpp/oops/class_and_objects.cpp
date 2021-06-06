//WAP to calculate the area of rectangle using class
#include<iostream>
using namespace std;

class Area{
    public:
        double length;
        double breadth;
    void getValue(){
        cout<<"Enter length and breadth of rectangle :"<<endl;
        cin>>length>>breadth;
    }
    int  calculateArea(){
            return length*breadth;
        }

};
int main(){
    Area a1;
    a1.getValue();
    cout<<"Area of rectangle = "<<a1.calculateArea()<<endl;
    return 0;
}
