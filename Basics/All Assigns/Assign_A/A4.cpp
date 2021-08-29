#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,rem, mul,div,sub;
    cout<<"Enter The value of a=";
    cin >> a ;
    cout <<"Enter The value of b=";
    cin >> b;
    sum=a+b;
    rem=a%b;
    sub=a-b;
    mul=a*b ;
    div=a/b;
    cout <<"Summation=" <<sum <<"\nRemainder=" <<rem;
    cout <<"\nMultiplication=" <<mul <<"\nSubtracted vlaue is="<<sub;
    cout <<"\nDivided Value is =" <<div;
    return 0;
}
