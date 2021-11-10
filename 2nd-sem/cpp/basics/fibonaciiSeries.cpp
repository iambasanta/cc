#include <iostream>
using namespace std;
int main()
{
    int n;
    int first_term = 0;
    int second_term = 1;
    int next_term;
    cout << "Enter your number to make a fibonacii series :" << endl;
    cin >> n;
    cout << first_term << " ";
    cout << second_term << " ";
    for (int i = 0; i <= n - 2; i++)
    {
        next_term = first_term + second_term;
        cout << next_term << " " << endl;
        cout << endl;
        first_term = second_term;
        second_term = next_term;
    }
    return 0;
}
