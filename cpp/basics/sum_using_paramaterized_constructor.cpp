#include <iostream>
using namespace std;

class Sum
{
public:
    int x, y;

    Sum(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
};

int main()
{
    Sum s1(10, 20);
    return 0;
}
