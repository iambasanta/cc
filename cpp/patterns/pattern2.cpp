#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter your row :"<<endl;
    cin>>row;
    cout<<"Enter your col :"<<endl;
    cin>>col;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
             cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
