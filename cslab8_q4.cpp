#include<iostream>
using namespace std;

int merge(int arr1[],int arr2[],int arr3[])
{
    for(int i=0;i<11;i++)
    {
        arr3[i]=arr1[i];
        arr3[i+4]=arr2[i];
    }
}
int largest(int arr[])
//variable declaration
{int a=arr[0];
	//looping
	for(int i=0;i<11;i++)
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

int main()
{
    int arr1[5]={1,2,3,4,5};int arr3[11];
    cout<<"the first array contains elements:";
     for(int i=0;i<11;i++)
    {
        cout<<arr1[i]<<" ";
    
    }
    cout<<endl;
    int arr2[6]={8,9,10,13,14,15};
    cout<<"the second array contains elements:";
     for(int i=0;i<11;i++)
    {
        cout<<arr1[i]<<" ";
    
    }
    cout<<endl;
    for(int i=0;i<11;i++)
    {
        merge(arr1,arr2,arr3);
        cout<<arr3[i]<<" ";
    }
    cout<<"the largest element among the two arrays is "<<largest(arr3)<<endl;
    cout<<"the smallest element among the two arrays is "<<smallest(arr3)<<endl;
    return 0;
}
    
