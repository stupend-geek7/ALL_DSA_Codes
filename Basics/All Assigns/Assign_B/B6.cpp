#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int x,b;
    cout<<"Enter the value of X:";
    cin>>x;
    b=sin(1/x);
    cout<<"Value of Sin(1/x)="<<setprecision(4)<<b;
    return 0;
}
