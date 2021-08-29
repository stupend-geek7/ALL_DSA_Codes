#include<iostream>

using namespace std;
int main()
{
    int cid,uc;
    float b,net,sr;
    char a[30];
    cout<<"Customer ID=";
    cin>>cid;
     cout<<"Unit Consumed=";
    cin>>uc;
    cout<<"Customer Name=";
    cin>>a[30];
    if(uc>=0&&uc<=199)
    {
        b=uc*1.20;
        if(b<100)
        {
            cout<<"Net Amount Paid By The Customer= Rs 100";
        }
        else
        {
            cout<<"Net Amount Paid By The Customer= RS "<<b;
        }
    }
    if(uc>=200&&uc<400)
    {
        b=1.50*uc;
    }
    if(uc>=400&&uc<600)
    {
        b=1.80*uc;
    }
    if(uc>=600)
    {
        b=2.00*uc;
    }
    if (b>400)
    {
        sr=0.15*b;
        net=b+sr;
        cout<<"Net Amount Paid By The Customer= RS "<<net;
    }
    return 0;

}
