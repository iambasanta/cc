#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout<<"memory is allocated."<<endl;
        }

        ~Test(){
            cout<<"memory is released."<<endl;
        }
};

int main(){
    Test t;
    return 0;
}
