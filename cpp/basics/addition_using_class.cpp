#include<iostream>
using namespace std;
class sum //creating class
{
private://in private put required variables for program generally contain data
int a,b,t;
public: //in public function are created to acess private data outside the class
void getdata(void);
void putdata(void);
};
void sum::getdata()//defining function created inside class and its task is to get values from user(what values we need as input)
{
    cout<<"entre a and b"<<endl;
    cin>>a>>b;

}
void sum::putdata() //what is out result (what need to be printed)
{
    t=a+b;
    cout<<"sum is "<<t<<endl;

}
 int main()//just create object 
 {
sum s1,s2;
cout<<"sum of first object:"<<endl;  //s1 is object of class sum
s1.getdata();//acesing data with the help of object
s1.putdata();
cout<<"sum of second object:"<<endl;;
s2.getdata();
s2.putdata();


     return 0;

 }
