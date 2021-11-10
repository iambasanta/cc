#include<iostream>
using namespace std;
class Student{
    private:
        int roll_no;
        char name[20];
    public:
        static int studentCount;
        Student(){
            studentCount ++;
        }

        void getData(){
            cout<<"Enter roll number : ";
            cin>>roll_no;
            cout<<"Enter name : ";
            cin>>name;
        }
        
        void showData(){
            cout<<"Roll number : "<<roll_no<<endl;
            cout<<"Name : "<<name<<endl;
        }
};

int Student::studentCount = 0;
int main(){
    Student s1,s2;
    s1.getData();
    s1.showData();
    s2.getData();
    s2.showData();
    cout<<"Total students :"<<Student::studentCount<<endl;
    return 0;
}
