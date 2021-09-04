#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {    sum=sum+a[j];
            cout<<" "<<sum;
        }   
    }
}