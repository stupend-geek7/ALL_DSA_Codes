#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	scanf("%d%d",&n,&s);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	int i=0;int j=0; int st=1;int en =1;
	while(j<n&&sum+arr[j]<=s)
	{
		sum+=arr[j];
		j++;
	}
	if(sum==s)
	{
		printf("%d,%d",i+1,j);
		return 0;
	}
	while(j<n)
	{
		sum+=arr[j];
		while(sum>s)
		{
			sum-=arr[i];
			i++;
		}
		if(sum==s)
		{
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	printf("%d,%d",st,en);
	return 0;
}
