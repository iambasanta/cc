//WAP to check the number divisible by 3 but not by 5

#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter any Number :"<<endl;
    cin>>n;

    if(n%3 == 0 && n%5!=0)
    {
        cout<<"the number is divisible by 3"<<endl;
    }
    else{
        cout<<"The condition is not suitable.!!!"<<endl;
    }
}
