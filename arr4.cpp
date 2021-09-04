#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int arr[n];
    cout<<"input array elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}