#include <stdio.h>
typedef char bit;
bit Cout=0;
bit fulladd(bit A ,bit B,bit Cin){
    Cout=(A&B)||(Cin&(A^B));
    return (A^B)^Cin;
}
int main()
{
    int i,j,k;
    int result;
    printf("A B Cin | S Cout\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                result=fulladd(i,j,k);
                printf("%d %d %d   | ",i,j,k);
                printf("%d %d\n",result,Cout);
            } }
    }
    return 0;
}
