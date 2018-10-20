//to find the largest,smallest,mean,median,elements with highest frequency
//library
#include<iostream>
using namespace std;
//declaring function
void print(int arr[])
{
//looping
for(int i=0;i<5;i++)
{
//printing the elements
cout<<arr[i]<<" "<<endl;
}}
//declaring function
int largest(int arr[])
//variable declaration
{int a=arr[0];
	//looping
	for(int i=0;i<5;i++)
	//condition
	{
	 if(a<arr[i])
	 {
	// highest value
	  a=arr[i];
	 }
	}
	 
	 return a;
}	

//declaring function for smallest value
int smallest(int arr[])
{        //initialising value
	int a=arr[0];
	//looping
	for(int i=0;i<5;i++)
	{
	//condition
	 if(a>arr[i])
	 {
	//initializing lowest element
	  a=arr[i];
	 }
	}
	
	return a;
}
//declaring function for the mean
float mean(int arr[])
{
	//declaring variables
	float sum=0;float mean;
	//looping
	for(int i=0;i<5;i++)
	{
	//finding sum of the element
	 sum=sum+arr[i];
	}
	//dividing by the total number of elements
	mean=sum/5;
	 
	return mean;
}
//declaring function to find the median
int median(int arr[])
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
	//returning the median i.e,the 3rd element
	int median=arr[2];
	return median;
	 
}
//function declaration to find the frequency
int frequency(int arr[])
	{
	//initializing variables
	 int element=0;
	 int count=1;
	//looping
	 for(int i=0;i<5;i++)
	 {
	//initializing 
	  int tempelement=arr[i];
	  int tempcount=0;
	//looping to find repeated elements
	  for(int j=0;j<5;j++)
	  {
	//condition for find the frequency of an element
	   if(arr[j]==tempelement)
	 //incrementing the frequency
	   tempcount++;
	//condition to find the highest frequency
	
	 if(tempcount>count)
	 {
	//returning element with highest frequency
	   element=tempelement;
	   
	 }}
	}
	return element;
}
	

	//driver function 
int main()
{
	//declaring array
	int arr[5]={4,6,3,9,9};
	//printing all the result
	print(arr);
	cout<<"largest element is "<<largest(arr)<<endl;
	cout<<"smallest element is "<<smallest(arr)<<endl;
	cout<<"mean of the elements in the array is "<<mean(arr)<<endl;
	cout<<"the median of the elements in the array is "<<median(arr)<<endl;
	cout<<"the element with the highest frequency is "<<frequency(arr)<<endl;
	return 0;
}
