#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, reversed = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;
    while (num != 0)
    {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num = num / 10;
    }

    cout << " The reversed of entered the number is: " << reversed << endl;

    if (n == reversed)
    {

        cout << " The number is a palindrome. :)";
    }
    else
    {

        cout << " The number is not a palindrome. :(";
    }

    return 0;
}
