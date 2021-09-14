#include<iostream>
using namespace std;
static int c;
void RecursiveFibonacci(int n,int a,int b)
{
    if(n==0)
        return;
    c=a+b;
    a=b;
    b=c;
    cout<<" "<<c;
    RecursiveFibonacci(n-1,a,b);

}
int main()
{
    int a=0,b=1,n;
    cin>>n;
    cout<<a<<" "<<b;
    RecursiveFibonacci(n-2,a,b);
}