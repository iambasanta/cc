#include<iostream>
using namespace std;
int main(){
        int a,b,x,y,r;
        char decision;
    do{
        cout<<"Enter a : ";
        cin>>a;
        cout<<"Enter b : ";
        cin>>b;

        x = a;
        y = b;

        while(y!=0){
            r = x%y;
            x = y;
            y = r;
        }
        cout<<"gcd ("<<a<<","<<b<<") is :"<<x<<endl;
        cout<<"Do you want to continue? Y/N :";
        cin>>decision;

    }while(decision == 'Y' || decision == 'y');
    return 0;
}
