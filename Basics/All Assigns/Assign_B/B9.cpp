#include<iostream>

using namespace std;
int main()
{
    int temp;
    cout<<"Enter The Temperature in Celsius=";
    cin>>temp;
    if(temp<0)
    {
        cout<<"Freezing Weather";
    }
    if(temp>=0&&temp<10)
    {
        cout<<" Very Cold Weather";
    }
    if(temp>=10&&temp<20)
    {
        cout<<"Cold Weather";
    }
    if(temp>=20&&temp<30)
    {
        cout<<"Normal weather";
    }
    if(temp>=30&&temp<40)
    {
        cout<<"Its Hot";
    }
    if(temp>=40)
    {
        cout<<"Its Very Hot";
    }
    return 0;
}
