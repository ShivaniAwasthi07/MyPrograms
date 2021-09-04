#include<iostream>
using namespace std;
int sum(int num)
{
    int sum1=(num*(num+1))/2;
    return sum1;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}