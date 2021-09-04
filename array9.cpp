#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];

    cout<<"enter array elements ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    int maxi=2;
    int diff=a[1]-a[0];
    int count=2;
    for(int i=2;i<n;i++)
    {
        if(diff==a[i]-a[i-1])
        {
            count++; 
        }
        else
        {   
            diff=a[i]-a[i-1];  
            count=2;
        }
        maxi=max(maxi,count);
    }
    cout<<maxi;
}