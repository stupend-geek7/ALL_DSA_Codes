#include<iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Angle A=";
    cin>>a;
    cout<<"Enter Angle B=";
    cin>>b;
    cout<<"Enter Angle C=";
    cin>>c;
    if(a+b+c==180)
        cout<<"It's A Valid Triangele";
    else
        cout<<"The Triamgle is not valid";
        return 0;
}
