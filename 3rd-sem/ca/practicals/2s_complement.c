#include <stdio.h>
int main()
{
    int n; // variable declaration
    printf("Enter the number of bits do you want to enter :");
    scanf("%d",&n);
    char binary[n+1]; // binary array declaration;
    char onescomplement[n+1]; // onescomplement array declaration
    char twoscomplement[n+1]; // twoscomplement array declaration
    int carry=1; // variable initialization
    printf("\nEnter the binary number : ");
    scanf("%s", binary);
    printf("\nThe ones complement of the binary number is :");
    // Finding onescomplement in C
    for(int i=0;i<n;i++)
    {
        if(binary[i]=='0')
            onescomplement[i]='1';
        else if(binary[i]=='1')
            onescomplement[i]='0';
    }
    onescomplement[n]='\0';
    printf("%s",onescomplement);
    printf("\nThe twos complement of the binary number is : ");
    // Finding twoscomplement in C
    for(int i=n-1; i>=0; i--)
    {
        if(onescomplement[i] == '1' && carry == 1)
        {
            twoscomplement[i] = '0';
        }
        else if(onescomplement[i] == '0' && carry == 1)
        {
            twoscomplement[i] = '1';
            carry = 0;
        }else
        {
            twoscomplement[i] = onescomplement[i];
        }
    }
    twoscomplement[n]='\0';
    printf("%s",twoscomplement);
    return 0;
}
