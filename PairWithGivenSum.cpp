// #include<iostream>
// using namespace std;
// int main()
// {
//     int t=0;
//     int a[]={8,7,2,3,5,6};
//     int n=sizeof(a)/sizeof(a[0]);
//     int sum=10;
//     int f[]={0};
//     int i,flag;
//     for(i=0;i<n;i++)
//     {
//         f[a[i]]++;
//     }
//     for(i=0;i<n;i++)
//     {
//         if(f[sum-a[i]]>0)
//         {
//             if((sum-a[i])==a[i])
//             {
//                 if(f[sum-a[i]]>1)
//                 {
//                     cout<<"Pair found"<<a[i],sum-a[i];
//                     f[a[i]]=0;
//                     flag=1;
//                 }
//             }
//         }
//     }
//     if(flag==0)
//     {
//         cout<<"\n not found ";

//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,d,target;
//     cin>>n>>target;
//     int nums[n];
//     for(int i=0;i<n;i++)
//         cin>>nums[i];
//     int f[]={0};
//     for(int i=0;i<n;i++)
//         f[nums[i]]++;
//     for(int i=0;i<n;i++)
//     {
//         if(f[nums[i]])
//         {
//             d=target-nums[i];
//             if(f[d]+nums[i]==target)
//                 cout<<"["<<i<<","<<d<<"]";
//         }
//     } 
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int f[200]={0};
    for(int i=0;i<n;i++)
        f[nums[i]]++;
    for(int i=0;i<n;i++)
    {    if(f[nums[i]]>2)
        {
            cout<<"true";
            return 0;
        }   
    }
    cout<<"false";
}