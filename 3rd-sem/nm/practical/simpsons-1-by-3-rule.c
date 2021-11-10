//Program - Composite simpson's 1/3 rule
//correct
#include <stdio.h>
#include<math.h>
#define e 2.71828
float function (float x)
{
	return pow(e,x)/x;
}
int main()
{
	int n, i;
	float a, b, x, result, sum=0.0, h;
	printf("\nEnter the starting and ending points: ");
	scanf("%f%f", &a, &b);
	printf("\nEnter the number of interval: ");
	scanf("%d",&n);
	h=(b-a)/n;
	for (i=1; i<=n/2; i++)
	{
		x=(a-h)+(2*h*i);
		sum=sum+4*function(x);
		if (i!=n/2)
		{
			sum+=2*function(x+h);
		}
	}
	sum=sum+function(a)+function(b);
	printf("\nThe result is: %f",(h/3)*sum);
	
    return 0;
}
