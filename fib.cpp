#include<iostream>
using namespace std;
int fib(int num)
{
    int a=0,b=1,sum=0;
    cout<<a<<", "<<b<<", ";
    for(int i=1;i<=num;i++)
    {
        sum=a+b;
        cout<<sum<<", ";
        a=b;
        b=sum;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    
}