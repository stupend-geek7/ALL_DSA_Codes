#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool found =false;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int lo=i+1;int high=n-1;
        while(lo<high)
        {
            int curr=a[i]+a[lo]+a[high];
            if(curr==target)
            {
                found=true;
            }
            else if(curr<target)
            {
                lo++;
            }
            else
            {
                high--;
            }
        }
    }
    if(found)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
    return 0;
}