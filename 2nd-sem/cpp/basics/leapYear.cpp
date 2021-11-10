#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter a Year :"<<endl;
    cin>>y;
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        cout<<"The year is leap Year."<<endl;

    }else{
        cout<<"The year is not a leap Year !!!";
    }
    
}
