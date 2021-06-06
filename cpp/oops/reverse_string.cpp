#include<iostream>
#include<string.h>
using namespace std;
void reverseit(char s[100]){
    int l = strlen(s);
    char temp;
     int j = l-1;
    for(int i = 0; i<l/2; i++){
            temp = s[j];
            s[j]  = s[i];
            s[i] = temp;
            j--;
    }
    cout<<s;
}
int main(){
    char str[100];
    cout<<"Enter string to reverse : ";
    cin>>str;
    reverseit(str);
    return 0;
}
