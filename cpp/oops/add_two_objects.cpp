#include<iostream>
using namespace std;
class Feet;
class Inch;

class Feet{
    public:
        int feet;
    public:
       Feet(int x){
          feet = x;
       }

       void display(){
           cout<<"Length in feet : "<<feet<<" feet."<<endl;
       }

       friend float getTotal(Feet f, Inch i);
};
class Inch{
    public:
        int inch,inFeet;
    public:
       Inch(int x){
           inch = x;
           inFeet = inch/12;
       }

       void display(){
           cout<<"Length in inch : "<<inch<<" inch."<<endl;
           cout<<"Inch converted to feet : "<<inFeet<<" feet."<<endl;
       }

       friend float  getTotal(Feet f, Inch i);
};

float getTotal(Feet f, Inch i){
    float total = f.feet + i.inFeet;
    return total;
}

int main(){
    Feet f(10);
    Inch i(24);
    f.display();
    i.display();
    cout<<"Total length in feet : "<<getTotal(f,i)<<" feet.";
    return 0;
}
