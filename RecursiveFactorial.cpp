#include<iostream>
using namespace std;
static int f=1;
int factorial(int n)
{
    if(n==0)
        return f;
    f=f*n;
    factorial(n-1);
    return f;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}