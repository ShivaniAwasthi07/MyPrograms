#include<iostream>
using namespace std;
int sum(int num)
{
    if(num==0)
        return 0;
    int ans=num+sum(num-1);
   
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}