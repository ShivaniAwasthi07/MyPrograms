#include<iostream>
using namespace std;
int tilingWays(int num)
{
    if(num==1 || num==0)
        return num;
    return tilingWays(num-1)+tilingWays(num-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<tilingWays(n)<<endl;
}