#include<iostream>
using namespace std;
int fib(int num)
{
    if(num==1 || num==0)
        return num;
    return fib(num-1)+fib(num-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}