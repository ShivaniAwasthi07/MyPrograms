#include<iostream>
using namespace std;
int pow(int num,int p)
{
    if(p==0)
        return 1;
    return pow(num,p-1)*num;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<pow(n,p)<<endl;
}