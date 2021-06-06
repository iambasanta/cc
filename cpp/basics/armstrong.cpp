#include<iostream>
using namespace std;
int main(){
   int n,a,b=0,temp;
   cout <<"Tner your number to check :"<<endl;
   cin>>n;
   temp = n;
   while(n!=0){
       a = n%10;
       b += a*a*a;
       n = n/10;
   }
   if(temp == b){
       cout<<"Your number is armstrong ."<<endl;
   }else{
       cout<<"Your number is not armstrong !!!."<<endl;
   }
}
