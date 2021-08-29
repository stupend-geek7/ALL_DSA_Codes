#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter The Marks:";
    cin>>n;
    if(n<40)
    {
        cout<<"Grade=FAIL";
    }
    else if(n>=40&&n<=49)
    {
        cout<<"Grade=D";
    }
    else if(n>=50&&n<=59)
    {
        cout<<"Grade=C";
    }
    else if(n>=60&&n<=69)
    {
        cout<<"Grade=B";
    }
    else if(n>=70&&n<=79)
    {
        cout<<"Grade=A";
    }
    else if(n>=80&&n<=89)
    {
        cout<<"Grade=E";
    }
    else if(n>=90&&n<=100)
    {
        cout<<"Grade=O";
    }
    return 0;
}
