//write a program to find the sum of the elements of an array
//library
#include <iostream>
using namespace std;

//declaring function
int fun(int arr[])
{
	//initialization
	int sum=0;
	//looping
	for(int i=0;i<4;i++)
	{
	//operation
	 sum=sum+arr[i];
	}
	return sum;
}
//driver function
int main()
{
	//declaring array
	int arr[4]={1,2,3,4};
	//declaring variable
	int sum=fun(arr);
	//displaying the result
	cout<<"The array has elements 1,2,3,4"<<endl;
	cout<<"The sum of the elements is "<<sum<<endl;
	return 0;
}
