#include<iostream>
using namespace std;
void dec(int num)
{
    if(num==0)
    {   
        return ;
    }
    cout<<num<<" ";
    dec(num-1);
}
void inc(int num)
{
    if(num==0)
    {   
        return;
    }
    inc(num-1);
    cout<<num<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    dec(n);
}