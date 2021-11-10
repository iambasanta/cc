#include<iostream>
using namespace std;
class point {

    private:
        int x,y;
    public: point(int x1, int y1){
        x = x1;
        y = y1;
    }
    point(const point &p3){
        x = p3.x;
        y = p3.y;

    }

    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};
int main(){
    point p1(10,20);
    point p3 = p1;

    cout<<"p1.x = "<<p1.getx()<<", p1.y = "<<p1.gety()<<endl;
    cout<<"p3.x = "<<p3.getx()<<", p3.y = "<<p3.gety();
    return 0;
}
