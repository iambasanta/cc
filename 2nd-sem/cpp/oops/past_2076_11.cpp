#include<iostream>
using namespace std;
class Student{
    public:
        int sid;
        string sname;
        string level;
    public: void getDetails(){
                cout<<"Enter student id : ";
                cin>>sid;
                cout<<"Enter Name : ";
                cin>>sname;
                cout<<"Level :";
                cin>>level;
            }
    public:
            void showDetails(){
                cout<<"Displaying Details."<<endl;
                cout<<"Id : "<<sid<<endl;
                cout<<"Name : "<<sname<<endl;
                cout<<"Level : "<<level<<endl;
            }
};
int main(){
    Student s1,s2;
    cout<<"Taking and showing details of first student."<<endl;
    s1.getDetails();
    s1.showDetails();
    cout<<"Taking and showing details of second student."<<endl;
    s2.getDetails();
    s2.showDetails();
    return 0;

}
