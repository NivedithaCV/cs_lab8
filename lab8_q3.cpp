//library
#include<iostream>
using namespace std;

	//declaring function for finding kth largest number
	int kthlargest(int arr[],int k)
{
	//looping for comparing with first element
	for(int j=0;j<5;j++)
	{
	//looping for comparing with the other elements
	 for(int i=j+1;i<5;i++)
	 {
	//condition
	  if(arr[j]<arr[i])
	  {//sorting
	   int max=arr[j];
	   arr[j]=arr[i];
	   arr[i]=max;
	  }
	 }
	}
	//returning kth element
	int value=arr[k-1];
	 return value;
}
	//declaring function for the kth smallest element
	int kthsmallest(int arr[],int k)
{

	//looping for comparing with first element
	for(int j=0;j<5;j++)
	{
	//looping for comparing with the other elements
	 for(int i=j+1;i<5;i++)
	 {
	//condition
	  if(arr[j]>arr[i])
	  {//sorting
	   int max=arr[j];
	   arr[j]=arr[i];
	   arr[i]=max;
	  }
	 }
	}
	//returning the kth element
	int value=arr[k-1];
	return value;
	 
}
//driving function
int main(){
//declaring arrays and variables
int arr[5]={11,5,48,9,10};int k;int c;
//asking user for the type
cout<<"if you want to find kth largest type 1"<<endl<<"if you want to find kth smallest type 2"<<endl;
cin>>c;
cout<<"enter the value of k"<<endl;
cin>>k;
//condtion to find greatest
if(c==1)
{
cout<<"the "<<k<<"th largest number is"<<kthlargest(arr,k)<<endl;
}
//condition to find the smallest
if(c==2)
{
cout<<"the "<<k<<"th smallest number is "<<kthsmallest(arr,k)<<endl;
}
return 0;
}
