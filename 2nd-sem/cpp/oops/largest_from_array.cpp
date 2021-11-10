#include<iostream>
using namespace std;
#define N 10

// defining the function template that
// returns the largest number of the array
// we consider type of array size directly integer

template <class T>

T find_max(T t[], int NO_OF_TERMS){
	T temp_max = t[0];
	for (int i = 0; i < NO_OF_TERMS; i++)
	{
		if (temp_max < t[i] )
		{
			temp_max = t[i];
		}
	}
	return temp_max;
}


int main(){
	int numbers[N];
	cout<<"Enter numbers:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>numbers[i];
	}
	cout<<"Largest Number of array is:"<<find_max(numbers,N)<<endl;
	// though you can make array size dynamic
	return 0;
}
