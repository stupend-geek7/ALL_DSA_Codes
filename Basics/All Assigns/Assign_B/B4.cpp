 #include<iostream>

using namespace std;
int main()
{
    int x,y;
    cout<<"Enter X coordinate:";
    cin>>x;
    cout<<"Enter y Coordinate:";
    cin>>y;
    if(x>0&&y>0)
    {
        cout<<"Quadrant-I(+,+)";
    }
    else if(x<0&&y>0)
    {
        cout<<"Quadrant-II(-,+)";
    }
    else if(x<0&&y<0)
    {
        cout<<"Quadrant-III(-,-)";
    }
    else if(x>0&&y<0)
    {
        cout<<"Quadrant-IV(+,-)";
    }
    return 0;
}
