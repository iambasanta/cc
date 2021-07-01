// program to calculate inverse extgcd(a,b: non negative integers with a>= b)
#include<iostream>
using namespace std;
int main(){
    int a,b,d,s,t,s1,s2,t1,t2,q,r;
    int x,y;
    char decision;
    do{

    cout<<"Enter a :";
    cin>>a;
    x= a;
    cout<<"Enter b :";
    cin>>b;
    y = b;

    if(b == 0){
        d = a;
        s = 1;
        t = 0;
    }else{
        s2 = 1;
        s1 = 0;
        t2 = 0;
        t1 = 1;
        while(b != 0){
            q = a/b;
            r  = a%b;
            s = s2-q*s1;
            t = t2-q*t1;
            a = b;
            b = r;
            s2 = s1;
            s1 = s;
            t2 = t1;
            t1 = t;

        }
        d = a;
        s = s2;
        t = t2;
    }
    cout<<d<<" is the gcd("<< x <<" , "<< y <<")"<<" with coefficients "<<s<<" and "<<t<<endl;
    cout<<"Do you want to continue ? Press Y/N. ";
    cin>>decision;
    }while(decision =='Y' || decision =='y');
    return 0;
}
