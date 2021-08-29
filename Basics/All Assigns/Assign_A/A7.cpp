#include<iostream>

using namespace std;
int main()
{
        int n,y,w,d;
        cout<<"Enter the number of Days:";
        cin>>n;
        y=n/365;
        w=(n-(365*y))/7;
        d=n-((y*365)+(w*7));
        cout<<"Years="<<y;
        cout<<"\nWeeks="<<w;
        cout<<"\nDays="<<d;
        return 0;
}
