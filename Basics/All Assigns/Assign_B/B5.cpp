#include<iostream>

using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter The Value of A=";
    cin>>a;
    cout<<"EnterThe Value of B=";
    cin>>b;
    if(a%b==0)
    {
        r=a/b;
        cout<<"Quotient is="<<r;
    }
    else
    {
        cout<<"Division Not Possible";
    }
    return 0;
}
