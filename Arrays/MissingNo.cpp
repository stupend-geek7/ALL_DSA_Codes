#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s^arr[i];
    }
    for(int i=0;i<n;i++)
    {
        s=s^i;
    }
    cout<<s<<endl;
    return 0;

}