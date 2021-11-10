#include<iostream>
#include<string>
using namespace std;

class Student{

    public:
        int roll_no;
        string name;
        string address;

    void getDetails(){
        cout<<"Enter roll no :";
        cin>>roll_no;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter address :";
        cin>>address;
    }
};
    void showDetails(Student s){
        cout<<"Roll no :"<<s.roll_no<<endl;
        cout<<"Name :"<<s.name<<endl;
        cout<<"Address :"<<s.address<<endl;
    }

int main(){
    Student s;
    s.getDetails();
    showDetails(s);
    return 0;
}
