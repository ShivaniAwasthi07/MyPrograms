#include<iostream>
using namespace std;
int fact(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
        f=f*i;
    return f;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
}