#include<iostream>
using namespace std;
static int r,sum=0;
int Reverse(int n)
{
    if(n==0)
        return sum;
    r=n%10;
    sum=sum*10+r;
    Reverse(n/10);
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    int d=n;
    if(Reverse(n)==d)
        cout<<d<<" is Palindrome";
    else
        cout<<d<<" is not palindrome";
    return 0;
}