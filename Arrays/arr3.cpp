#include<bits/stdc++.h>
using namespace std;
void printdistinct(int arr[],int n)
{
	for(int i=0;i<n;i++)
   {
	int j;
	for(j=0;j<i;j++)
	{
		if(arr[i]==arr[j])
		{
			break;
		}
	}
	if(i==j)
	{
		cout<<arr[i]<< " ";
	}
   }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	printdistinct(arr,n);
	return 0;
}

