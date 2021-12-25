#include <stdio.h>
typedef char bit;
bit carry=0;
bit halfadd(bit A,bit B){
    carry=A&B;
    return A^B;
}
int main()
{
    int i,j,result;
    printf("A B | S Carry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            result=halfadd(i,j);
            printf("%d %d | ",i,j);
            printf("%d %d\n",result,carry);
        }
    }
    return 0;
}
