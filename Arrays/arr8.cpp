#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,m;
	cout<<"Input the size of array:";
	cin>>n;
	cout<< "Input "<<n<<" elements in the array in ascending order\n";
	for(int i=0;i<n;i++)
	{
		cout<< "Element-"<<i<<":";
		cin>>arr[i];
	}
	cout<< "\nInput the position where to delete:";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(i==m)
		{
			arr[i]=arr[i+1];
			break;
		}
	}
	cout<< "The new list is:\n";
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
