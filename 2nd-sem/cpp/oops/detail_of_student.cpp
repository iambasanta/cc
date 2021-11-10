//wap to display the details of sutdent using class
#include<iostream>
using namespace std;

class Student{
    public:
        string name = "Basanta";
        int age = 18;
        string college = "Prime";
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"college :"<<college<<endl;
    }
};

int main(){
    Student s1;
    s1.display();
    return 0;
}
