//Program- composite Simpson's 3/8 rule.
// correct
#include <stdio.h>
#include<math.h>
#define e 2.71828
/*
float function (float x)
{
	return pow(e,-pow(x,2));
}
*/
float function(float x)
{
	return (pow(x,3)+1);
}
int  main()
{
	int n, i;
	float a, b, x, result, sum,sum1, sum2, sum3 ,h;
	sum1=0, sum2=0, sum3=0;
	printf("\nEnter the starting and ending points: ");
	scanf("%f%f", &a, &b);
	printf("\nEnter the number of interval: ");
	scanf("%d",&n);
	h=(b-a)/n;
	for (i=1; i<n; i=i+3)
	{
		x=a+i*h;
		sum1=sum1+function(x);
	}
	for (i=2; i<n; i=i+3)
	{
		x=a+i*h;
		sum2=sum2+function(x);
	}
	for (i=3; i<n; i=i+3)
	{
		x=a+i*h;
		sum3=sum3+function(x);
	}
	sum=3*sum1+3*sum2+2*sum3+function(a)+function(b);
	result=((3*h)/8)*sum;
	printf("\nThe result is : %f",result);
    return 0;
}

//input: 1 2.8 9
//output: 16.91639

