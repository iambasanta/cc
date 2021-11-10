//wap to calculate the average of 5 numbers inputed by user
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,num5,sum,avg = 0;
    cout<<"Enter your first number :"<<endl;
    cin>>num1;
     cout<<"Enter your second number :"<<endl;
    cin>>num2;
     cout<<"Enter your third number :"<<endl;
    cin>>num3;
     cout<<"Enter your foruth number :"<<endl;
    cin>>num4;
     cout<<"Enter your fifth number :"<<endl;
    cin>>num5;

    sum = num1 + num2 + num3 + num4 + num5;
    avg = sum / 5;

    cout<<"The average of entered number is "<< avg<<endl;


    
}
