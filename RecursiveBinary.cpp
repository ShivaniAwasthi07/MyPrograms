#include<iostream>
using namespace std;
int Binary(int num)
{
    if(num==0)
        return 0;
    return(num%2+10*Binary(num/2));
}
int main()
{
    int n;
    cin>>n;
    cout<<Binary(n);
    return 0;
}