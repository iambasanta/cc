// wap to take input x from class Takex, y from Takey and display the sum of x and y using class sum using multiple inheritance.
#include<iostream>
using namespace std;

class Takex{

    public: 
        int x;


        int getx(int a){
            cout<<"Enter x :";
            cin>>x;
            a = x;
            return x;
            
        }
};

class Takey{
    public:
        int y;

        int gety(int b){
            cout<<"Enter y :";
            cin>>y;
            b = y;
            return y;
        }
};
/* class child_of_x: public Takex{ */
/* }; */

/* class child_of_y: public Takey{ */

/* }; */

/* int main(){ */
/*     int sum =0; */
/*     child_of_x c1; */
/*     child_of_y c2; */

/*     sum = c1.getx(2) + c2.gety(3); */
/*     cout<<" Sum is : "<<sum; */
/*     return 0; */
/* } */

class Sum: public Takex, public Takey{

    public:
        int sum=0;
        Takex c1;
        Takey c2;

        
        void displaySum(){
            
        sum = c1.getx(2) + c2.gety(3);
        cout<<"Sum is :"<<sum;
        }
};

int main(){
    Sum s;
    s.displaySum();
    return 0;

}
