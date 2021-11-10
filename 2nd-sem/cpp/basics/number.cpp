//wap to take input of five digit number and separate it
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,num; 
    cout<<"Enter your number :"<<endl;// enter 12345
    cin>>num;
    cout<<"Entered number :"<<num<<endl;// print entered number 12345
    a = num % 10;  // 5
    num /=10;//12340  12340/10 -> 1234
    b = num % 10; //4
    num /=10;// 1230 -> 123
    c = num % 10; //3
    num = num/10;//120 -> 12
    d = num % 10; //12 % 10 -> 2
    num = num / 10; //10 / 10 1
    e = num;
    cout<<"separated numbers :"<<endl;
    cout<<e<<" "<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
    return 0; 

    
    
}
