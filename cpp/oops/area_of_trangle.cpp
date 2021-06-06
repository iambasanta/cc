//example to illustrate the uses of classes and objects
//wap to find the area of trangle using class
#include<iostream>
using namespace std;

class Triangle{
    public:
        double h;
        double b;
    void getValue(){
        cout<<"Enter h and b :"<<endl;
        cin>>h>>b;
    }
    int calculateArea(){
};

int main(){
    Triangle t1;
    t1.getValue();
    float area;
    area =  t1.calculateArea()/2;
    cout<<"The are of triangle is "<<area<<endl;
    return 0;
}
