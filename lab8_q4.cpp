//librrary
#include<iostream>
using namespace std;
//declaring function to merge arr1 and arr2
int merge(int arr1[],int arr2[],int arr3[])
{
	//looping
    for(int i=0;i<10;i++)
    {
	//taking elements of first array
	  if(i<5)
      {

        arr3[i]=int (arr1[i]);
       }
	//taking elements of second array
	  if(i>4&&i<10)
	    {
        arr3[i]=int (arr2[i-5]);
        }
     }
}
//declaring function to find the largest
int largest(int arr[])
//variable declaration
{int a=arr[0];
	//looping
	for(int i=0;i<10;i++)
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
	for(int i=0;i<10;i++)
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
//driver function
int main()
{
	//first array
    int arr1[5]={1,2,3,4,5};int arr3[11];
	//printing firdt array
    cout<<"the first array contains elements:";
     for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    
    }
    cout<<endl;
	//second array
    int arr2[5]={8,9,10,13,14};
	//printing second array
    cout<<"the second array contains elements:";
     for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    
    }
    cout<<endl;
	//printing the merged array
	cout<<"the merged array is having elements:";
    for(int i=0;i<10;i++)
    {
        merge(arr1,arr2,arr3);
        cout<<arr3[i]<<" ";
    }
	  cout<<endl;
	//printing the largest value
    cout<<"the largest element among the two arrays is "<<largest(arr3)<<endl;
	//printing the smallest value
    cout<<"the smallest element among the two arrays is "<<smallest(arr3)<<endl;
    return 0;
}
