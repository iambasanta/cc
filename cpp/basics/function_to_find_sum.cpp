#include <iostream>
using namespace std;

void sum();

int main(){
        
    sum();
    return 0;

}
   
void sum(){
    int n,m,sum;

    cout<<"Enter your first num er:"<<endl;
    cin>>n;
    cout<<"Enter your second number: "<<endl;

    cin>>m;

    sum = n+m;
    cout<<"The sum of entered numbers is "<<sum<<endl;    
}


