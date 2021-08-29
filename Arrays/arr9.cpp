#include<iostream>
using namespace std;
int main()
{
	int arr1[15],arr2[15],sum[15],n,m;
	cout<< "Input the no of elements in an array one:";
	cin>>n;
	cout<<"Input the no of elements in an array two:";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>arr2[j];
	}
	for(int i=0;i<n;i++)
	{
		sum[i]=arr1[i]+arr2[i];
	cout<<sum[i]<<" ";
	}
	return 0;
}
