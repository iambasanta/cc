#include <stdio.h>
#include<math.h>
#define e 2.71828
float function (float x)
{
	return pow(e,-pow(x,2));
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
	for (i=1; i<n; i++)
	{
		x=a+h*i;
		sum=sum+2*function(x);
	}
	sum=sum+function(a)+function(b);
	printf("\nThe result is: %f",(h/2)*sum);
    return 0;
	
} 
