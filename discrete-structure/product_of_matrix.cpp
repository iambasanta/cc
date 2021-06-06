#include<iostream>
using namespace std;
#define rmax 20
#define cmax 20

int main(){
    int A[rmax][cmax],B[rmax][cmax];
    int Mul[rmax][cmax] = {{0}};
    int row1,col1,row2,col2;
    cout<<"Enter no of rows for A :";
    cin>>row1;
    cout<<"Enter no of columns A :";
    cin>>col1;
    cout<<"Enter no of rows for B :";
    cin>>row2;
    cout<<"Enter no of columns B :";
    cin>>col2;

    if(col1 == row2){
        cout<<"Entering elements of A "<<endl;
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<col1; j++){
                cout<<"Value of A "<<i<<j+1<<" :";
                cin>>A[i][j];
            }
        }

        cout<<"Entering elements of B "<<endl;
        for(int i = 0; i<row2; i++){
            for(int j = 0; j<col2; j++){
                cout<<"Value of B "<<i<<j+1<<" :";
                cin>>B[i][j];
            }
        }
        for(int i = 0; i<row1; i++){
             for(int j = 0; j<col2; j++){
                 for(int k = 0; k<col1;k++){
                     Mul[i][j] = Mul[i][j] || (A[i][k] && B[k][j]) ;
                 }
             }
         }
        cout<<"Product of two matrix :"<<endl;
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<col2; j++){
                cout<< Mul[i][j]<<" " ;
            if(j ==col2-1)
            cout<<endl;
        }
    }
    }
    else{
        cout<<"Error ! Entered dimensions for matrices do not match.";
    }

    return 0;
}
