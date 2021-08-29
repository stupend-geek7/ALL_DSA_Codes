#include<iostream>
using namespace std;
int main()
{
	int n,j,k;
	cout<< "Input the number of elements to be stored in the array:";
	cin>>n;
	int arr1[n];
	int arr2[n];
	int arr3[n];
	j=0;k=0;
    for(int i=0;i<n;i++)
	{
		cout<< "Element-"<<i<<":";
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr1[i]%2==0)
		{
			arr2[j]=arr1[i];
			j++;
		}
		else
		{
			arr3[k]=arr1[i];
			k++;
		}
	}
	cout<< "\nThe Even elements of array are:\n";
	for(int i=0;i<j;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<< "\nThe Odd elements of array are:\n";
	for(int i=0;i<k;i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}
