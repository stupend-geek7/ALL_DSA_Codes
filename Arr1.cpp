#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the total number of data:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int mx=INT_MIN;
	int mn=INT_MAX;
	cout<< "Prime numbers are=";
	for(int i=0;i<n;i++)
	{
		int c=0;
		mx=max(mx,arr[i]);
		mn=min(mn,arr[i]);
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			cout<<"["<<arr[i]<<"]"<<" ,";
		}
		if(arr[i]%2==0)
		{
			cout<<arr[i];
		}
	}
	cout<<mx<<" "<<mn<<endl;
	return 0;
}
