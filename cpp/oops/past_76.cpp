#include<iostream>
using namespace std;
class Teacher{
    public:
    int tid;
    string subject;

    public:
    void  getDataOfTeacher(){
        cout<<"Taking information of Teacher ."<<endl;
        cout<<"Enter id: ";
        cin>>tid;
        cout<<"Enter subject: ";
        cin>>subject;
    }

    public:
    void  showDataOfTeacher(){
        cout<<"Showing information of Teacher ."<<endl;
        cout<<"Id : "<<tid<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};

class Staff{
    public:
        int sid;
        string position;

    public:
         void getDataOfStaff(){
        cout<<"Taking information of Staff."<<endl;
        cout<<"Enter id : ";
        cin>>sid;
        cout<<"Enter position : ";
        cin>>position;
        }

    public:
         void  showDataOfStaff(){
        cout<<"Showing information of staff."<<endl;
        cout<<"Id : "<<sid<<endl;
        cout<<"Position : "<<position<<endl;
        }
};

class Coordinator: public Teacher,public Staff{
    public:
        string department;

    public:
        void getDataOfCoordinator(){
            cout<<"Department :";
            cin>>department;
        }

        void showDataOfCoordinator(){
            cout<<"Department : "<<department<<endl;
        }
};


int main(){
    Coordinator c1,c2;
    c1.getDataOfTeacher();
    c1.getDataOfStaff();
    c1.getDataOfCoordinator();
    c1.showDataOfTeacher();
    c1.showDataOfStaff();
    c1.showDataOfCoordinator();

    c2.getDataOfTeacher();
    c2.getDataOfStaff();
    c1.getDataOfCoordinator();
    c2.showDataOfTeacher();
    c2.showDataOfStaff();
    c1.showDataOfCoordinator();
    return 0;
}

