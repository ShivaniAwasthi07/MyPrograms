#include<iostream>
using namespace std;
bool check(int p,int q,int r)
{
    int a=max(p, max(q,r));
    int b,c;
    if(a==p)
    {
        b=q;
        c=r;
    }
    else if(a==q)
    {
        b=p;
        c=r;
    }
    else
    {
        b=p;
        c=q;
    }
    if(a*a == b*b + c*c)
        return true;
    else 
        return false;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
        cout<<"Pythagorus Triplet";
    else
        cout<<"Not a Pythagorus Triplet";
    
}