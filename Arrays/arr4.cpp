#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Input the number of elements to be stored in the array:";
	cin>>n;
	int arr[n];int f[n];
	cout<<"Input "<<n<<" elements in an array\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Element-"<<i<<":";
		cin>>arr[i];
		f[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		int c=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=c;
		}
	}
		cout<<"\nThe frequency of all elements to be stored in the array:\n";
		for(int i=0;i<n;i++)
		{
			if(f[i]!=0)
			{
				cout<<arr[i]<<" occurs "<<f[i]<<" times"<<endl;
			}

		}
	return 0;
}
