//wap to calculate reverse of given number using class
//wap to calculate area of triangle using constructor
// wap to take input of student and display tje detail of those student using object passing to function
#include<iostream>
using namespace std;

class Reverse{
     public:
         int n,num,digit,reversed=0;

    int reversedNumber()
    {
        cout<<"Enter number to check :"<<endl;
        cin>>n;

        while(n != 0){
            digit = n%10;
            reversed = (reversed *10)+digit;
            n = n/10;
        }
        cout<<"The reversed number is :"<<reversed ;

    }
};

int main(){
    Reverse r;
    r.reversedNumber();
    return 0;
}
