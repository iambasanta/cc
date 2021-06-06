#include<iostream>
using namespace std;
class Count{
    private:
        int value;
    public:
        Count(): value(5){}
        
        void operator ++(){
            ++value;
        }

        void display(){
            cout<<"count : "<<value<<endl;
        }
};

int main(){
    Count c;
    ++c;
    c.display();
    return 0;
}
