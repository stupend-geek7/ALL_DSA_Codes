#include<iostream>
using namespace std;
int main()
{
	int arr1[100],arr2[100],n;
	cout<< "Input the size of First array:\n";
	cin>>n;
	cout<< "Input "<<n<<" elements in First array in ascending order:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cout<< "Input the size of Second array:\n";
	cin>>n;
	cout<< "\nInput "<<n<< " elements in Second array in ascending order\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	cout<< "Elements in the First array:\n";
	for(int i=0;i<n;i++)
	{
		cout<< arr1[i]<<",";
	}
	cout<< "\nElements in the Second array:\n";
	for(int i=0;i<n;i++)
	{
		cout<< arr2[i]<<",";
	}
	int arr3[100],k=0;
	for(int i=0;i<n;i++)
	{
		arr3[k++]=arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		arr3[k++]=arr2[i];
	}
	 for(int i=0;i<k-1;i++)
		{
			for(int j=i+1;j<k;j++)
			{
				if(arr3[j]<arr3[i])
				{
					int temp=arr3[j];
					arr3[j]=arr3[i];
					arr3[i]=temp;
				}
			}
		}
	cout<< "\nElements in the merged array:\n";
	for(int i=0;i<k;i++)
	{
		cout<<arr3[i]<<",";
	}
	return 0;
}
