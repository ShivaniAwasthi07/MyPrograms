#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input length of array ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int max=ar[0];
    int min=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>max)
            max=ar[i];
        if(ar[i]<min)
            min=ar[i];
    }
    cout<<"max value in array is:"<<max;
    cout<<"\nmin value in array is:"<<min;
}