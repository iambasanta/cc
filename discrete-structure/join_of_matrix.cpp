#include<iostream>
using namespace std;
#define rmax 20
#define cmax 20

int main(){
    int A[rmax][cmax],B[rmax][cmax];
    int J[rmax][cmax];
    int row,col;
    cout<<"Enter no of rows :";
    cin>>row;
    cout<<"Enter no of columns :";
    cin>>col;
    cout<<"Entering elements of A "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Value of A"<<i+1<<j+1<<" :";
            cin>>A[i][j];
        }
    }
    cout<<"Entering elements of B "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Value of B"<<i+1<<j+1<<" :";
            cin>>B[i][j];
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
           J[i][j] = A[i][j]||B[i][j];
        }
    }
    cout<<"Joint of two matrix :"<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
          cout<< J[i][j]<<" " ;
          if(j ==col-1)
          cout<<endl;
        }
    }
    return 0;
}
