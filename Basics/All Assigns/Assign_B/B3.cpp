#include<iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter side A=";
    cin>>a;
    cout<<"Enter Side B=";
    cin>>b;
    cout<<"Enter Side C=";
    cin>>c;
    if(a==b&&b==c)
    {
        cout<<"The Triangle is Equivalent";
    }
    if(a==b||b==c||a==c)
    {
        cout<<"The Triangle is Isoceles";
    }
    else
    {
        cout<<"The Triangle is Scalene";
    }
    return 0;
}
