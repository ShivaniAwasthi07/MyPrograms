#include<iostream>
using namespace std;
bool Coordinates(int x1,int y1,int x2,int y2)
{
    if(x1==x2 && y1==y2)
        return true;
    if(x1>x2 || y1>y2)
        return false;
    return ((Coordinates(x1,x1+y1,x2,y2))||(Coordinates(x1+y1,y1,x2,y2)));
    
}
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(Coordinates(x1,y1,x2,y2))
        cout<<"Valid Path";
    else
        cout<<"Not a Valid Path";
    return 0;

}