#include<iostream>
using namespace std;

int mpower(int b, int n,int m){
    if(n == 0) return 1;
    else if(n%2 == 0) return (mpower(b,n/2,m)*mpower(b,n/2,m))%m;
    else return (((mpower(b,(n-1)/2,m)*mpower(b,(n-1)/2,m))%m)*b%m)%m;
}
int main(){
    int b,n,m,mpow;
    char dec;
    do{
        cout<<"To calculate b^n mod m "<<endl;
        cout<<"Enter integers b,n and m : ";
        cin>>b>>n>>m;
        mpow = mpower(b,n,m);
        cout<<b<<" "<<n<<" "<<m<<" "<<mpow<<endl;
        cout<<"Do you want to continue ? Y/N :";
        cin>>dec;
    }while(dec == 'Y' || dec == 'y');
    return 0;
}
