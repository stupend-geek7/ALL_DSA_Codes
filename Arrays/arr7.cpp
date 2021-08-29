#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int arr[100],n,m,p;
	cout<< "Input the size of array:";
	cin>>n;
	cout<< "Input "<<n<<" elements in the array in ascending order:\n";
	for(int i=0;i<n;i++)
	{
		cout<< "Element-"<<i<< ":";
		cin>>arr[i];
	}
	cout<< "Input the value to be inserted:";
	cin>>m;
	cout<< "The Existing array list is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<< " ";
	}
	for(int i=0;i<n;i++)
	{
		if(m<arr[i])
		{
			p=i;
			break;
		}
	}
	for(int i=n;i>=p;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[p]=m;
	cout<< "\nAfter insertion the list is :\n";
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<< " ";
	}
	return 0;
}

