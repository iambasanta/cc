#include<iostream>
#include<string>
using namespace std;
class student
{
public:
int roll;
int age;
string name;
string adress;
public:
void  getinfo();
void putinfo();
};

    void student::getinfo()
    {
    cout<<"entre roll:"<<endl;
    cin>>roll;
 cout<<"entre name:"<<endl;
 cin>>name;
    cout<<"entre adress:"<<endl;
    cin>>adress;
    cout<<"entre age:"<<endl;
    cin>>age;}
    

        void student::putinfo()
        {
         cout<<"roll:"<<roll<<endl;
          cout<<"name:"<<name<<endl;
           cout<<"adress:"<<adress<<endl;
            cout<<"age:"<<age;

    }


int main()
{
student s1,s2;
cout<<"information of first student "<<endl;
s1.getinfo();
cout<<endl;
cout<<"information of 2nd student "<<endl;
s2.getinfo();

s1.putinfo();
s2.putinfo();
return 0;
} 
