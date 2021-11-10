#include<iostream>
using namespace std;
#define max 20

int search(int a[], int i, int j, int x){
    if(a[i] == x) return i;
    else if(i == j) return 0;
    else return search(a,i+1,j,x);
}

int main(){

    int a[max],n,x,i=1,j,k,location;
    char dec;
    cout<<"Enter the number of elements in the list : ";
    cin>>n;
    j = n;
    cout<<"Enter the elements of the list : ";
    for(k = 1; k<=n; k++){
        cin>>a[k];
    }
    
    do{
        cout<<"Enter the elements to search in the list : ";
        cin>>x;
        location = search(a,i,j,x);
        cout<<"The location of the element "<<x<<" is : "<<location<<endl;
        cout<<" Do you want to search another element ? Y/N : ";
        cin>>dec;
    }while(dec == 'Y' || dec == 'y');

    return 0;
}
