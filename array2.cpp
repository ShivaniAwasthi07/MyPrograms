#include<iostream>
using namespace std;

int main()
{
    int j,n,k;
    cout<<"input array size";
    cin>>n;
    int ar[n];
    cout<<"input array elements";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"enter element to be searched";
    cin>>k;
    for(j=0;j<n;j++)
    {
        if(ar[j]==k)
        {   
            cout<<"element found at index: "<<j;
            break;
        }
    }
    if(j==n)
        cout<<"-1";
}