#include<iostream>
using namespace std;
int main()
{
    int n,gcd;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    for(int i=1;i<=max;i++)
    {
        if(max%i==0 && min%i==0)
            gcd=i;
    }
    cout<<gcd;
}