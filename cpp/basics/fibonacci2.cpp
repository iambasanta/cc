//Wap to find fibonacci series upto users request
//wap to find the inputed number is pallindrome or not
//wap to generate following pattern
// a. 1 2 3 4 5
//    1 2 3 4
//    1 2 3
//    1 2
//    1
#include <iostream>
using namespace std;
int main()
{
    int n;
    int first_number = 0;
    int second_numer = 1;
    int next_term;

    cout << "Enter your number : " << endl;
    cin >> n;
    cout << first_number << " ";
    cout << second_numer << " ";
    for (int i = 0; i < n; i++)
    {
        next_term = first_number + second_numer;
        cout << next_term << " ";
        first_number = second_numer;
        second_numer = next_term;
    }
    return 0;
}
