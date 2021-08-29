#include<iostream>

using namespace std;
int main()
{
    int n,t;
    cout<<"Enter The value of N:";
    cin>>n;
    if(n<0)
    {
        t=-1*n;
        cout<<"Absolute value="<<t;
    }
    else
        cout<<"Absolute value="<<n;
}
