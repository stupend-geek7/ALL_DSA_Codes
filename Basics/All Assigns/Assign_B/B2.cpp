#include<iostream>

using namespace std;
int main()
{
    int sa,com;
    cout<<"Enter the Sale Amount:";
    cin>>sa;
    if(sa<500)
    {
        com=35;
        cout<<"Commission="<<com;
    }
    else if(sa>=500&&sa<=2000)
    {
        com=0.1*sa;
        cout<<"Commission="<<com;
    }
    else if(sa>=2001&&sa<=5000)
    {
        com=0.15*sa;
        cout<<"Commission="<<com;
    }
    else if(sa>5000)
    {
        com=0.2*sa;
        cout<<"Commission="<<com;
    }
    return 0;
}
