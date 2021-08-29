#include<iostream>
using namespace std;
int main()
{
	int n,c=0,m;
	cout<<"Input the number of elements to be stored in the array:";
	cin>>n;
	int arr1[n];
	int arr2[n];
	int arr3[n];
	cout<<"Input "<<n<<" elements in the array:\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Element-"<<i<<":";
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
		arr3[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr3[j]=m;
				m++;
			}
		}
		m=1;
	}
	for(int i=0;i<n;i++)
	{
		if(arr3[i]==2)
		{
			c++;
		}
	}
	cout<< "\nTotal number of duplicate elements found in the array is:"<<c;
	return 0;
}
