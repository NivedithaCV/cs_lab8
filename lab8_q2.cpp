//to find the largest,smallest,mean,median,elements with highest frequency
//library
#include<iostream>
using namespace std;

int largest(int arr[])
{int a=arr[0];
	
	for(int i=0;i<5;i++)
	
	{
	 if(a<arr[i])
	 {
	  a=arr[i];
	 }
	}
	 
	 return 0;
}	


int smallest(int arr[])
{
	int a=arr[0];
	for(int i=0;i<5;i++)
	{
	
	 if(a>arr[i])
	 {
	  a=arr[i];
	 }
	}
	
	return a;
}
float mean(int arr[])
{
	
	float sum=0;float mean;
	for(int i=0;i<5;i++)
	{
	 sum=sum+arr[i];
	}
	mean=sum/5;
	 
	return mean;
}
int median(int arr[])
{
	
	for(int j=0;j<5;j++){
	int a=arr[0];
	for(int i=0;i<5;i++)
	{
	
	 if(a>arr[i])
	 {
	  a=arr[i];
	 }
	}
	arr[j]=a;
	arr[i]=largest element(arr);
	}
	int median=arr[j=3];
	return median;
}
int main()
{
	int arr[5]={3,6,7,9,4};
	cout<<"largest element is "<<largest(arr)<<endl;
	cout<<"smallest element is "<<smallest(arr)<<endl;
	cout<<"mean of the elements in the array is "<<mean(arr)<<endl;
	cout<<"the median of the elements in the array is"<<median(arrq)<<endl;
	return 0;
}

