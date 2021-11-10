#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"Enter number to print sum of :"<<endl;
    cin >>n;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout<<"The sum of "<<n<<" natural numbers is :"<<sum<<endl;
}
