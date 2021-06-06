#include<iostream>
using namespace std;
#define max 10

int main(){
    int i,j,k,n,mat[max][max],mat2[max][max] = {{0}};
    cout<<"Enter the number of elements in set A : ";
    cin>>n;
    cout<<"Enter the matrix representation fo  relation."<<endl;
    cout<<"One row at a time : "<<endl;
    for(i = 0; i<=n-1; i++){
        for(j = 0; j<= n-1; j++){
            cin>>mat[i][j];
        }
    }

    //checking reflexivity
    int key = 1;
    for(i = 0; i<=n-1; i++){
        key = key && mat[i][i];
    }
    if(key == 1){
        cout<<"The given realation is reflexive ."<<endl;
    }else{
        cout<<"The given relation is not reflexive."<<endl;
    }

    //checking symmetricity
    key = 1;
    for(i = 0; i<=n-1; i++){
        for(j = 0; j<=n-1; j++){
            if(mat[i][j] != mat[j][i]){
                key = 0;
            }
        }
    }
    if(key == 1){
        cout<<"The given realation is symmetric."<<endl;
    }else{
        cout<<"The given relation is not symmetric."<<endl;
    }

    //checking antisymmetricity
    key = 1;
    for(i =0; i<=n-1; i++){
        for(j = 0; j!=i && j<=n-1; j++){
            if((mat[i][j] && mat[j][i]) == 1){
                key = 0;
            }
        }
    }
    if(key == 1){
        cout<<"The given realation is antisymmetric."<<endl;
    }else{
        cout<<"The given relation is not antisymmetric."<<endl;
    }

    //checking transitivity
   for(i = 0; i<=n-1; i++){
       for(j = 0; j<=n-1; j++){
           mat2[i][j] =0 ;
           for(k = 0; k<=n-1; k++){
               mat2[i][j] = mat2[i][j] || (mat[i][k] && mat[k][j]);
           }
       }
   } 
   key = 1;
   for(i = 0; i<=n-1; i++){
       for(j = 0; j<=n-1; j++){
           if(mat2[i][j] ==1 && mat[i][j] == 0){
               key = 0;
           }
       }
   }
    if(key == 1){
        cout<<"The given realation is transitive."<<endl;
    }else{
        cout<<"The given relation is not transitive."<<endl;
    }
    return 0;
}
