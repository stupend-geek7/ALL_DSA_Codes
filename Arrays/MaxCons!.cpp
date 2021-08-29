#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int zerocnt=0,j=0,ans=0;
    for (int  i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
            zerocnt++;
        }
        while(zerocnt>k)
        {
            if(a[j]==0)
            {
                zerocnt--;
            }
            j++;
        }
        ans=max(ans,i-j+1);
    }
    cout<<ans;
    return 0;
}