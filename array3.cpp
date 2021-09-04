#include<iostream>
using namespace std;
int binarysearch(int ar[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(key==ar[mid])
        {
            return mid;
        }
        else if(key>ar[mid])
        {
            s=mid+1;
        }
        else
            e=mid-1;
    }
    return -1;
}
int main()
{
    int n,k,start,end;
    cin>>n;
    int ar[n];
    cout<<"enter array elements in sorted order ";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<"enter element to be searched ";
    cin>>k;
    cout<<binarysearch(ar,n,k);
}
    