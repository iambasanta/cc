#include<iostream>
using namespace std;

double power(int x,int y){
    if(y == 0) return 1;
    else{
        return x * power(x,y-1);
    }
}

int main(){
    float a;
    int n;
    double pow;
    char dec;

    do{
        cout<<"Enter a non zero real number : ";
        cin>>a;
        cout<<"Enter a non negative integer : ";
        cin>>n;
        cout<<"The value of "<<a<<" raised to the power "<<n<<" is :"<<power(a,n)<<endl;
        cout<<"Do you wnat to continue : Y or N ?";
        cin>>dec;
    }while(dec == 'Y' || dec =='y');
}
