#include <stdio.h>
#include <conio.h>
// 1 9 25 49 upto 10th term
int main()
{
    int a = 1;
    int b;
    clrscr();
    for (int i = 1; i <= 10; i++)
    {
        b = a * a;
        a = a + 2;
        printf("%d ", b);
    }
}
