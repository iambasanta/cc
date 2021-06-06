#include<iostream>
using namespace std;

namespace first{
   int x = 5;
   int y =2;
}
namespace second {
   int x = 3;
   int y = 4; 
}

int main(){
    using namespace first;
    cout << x << endl;
    cout << y << endl;

    cout<<second::x <<endl;
    cout<<second::y <<endl;
    return 0;
}