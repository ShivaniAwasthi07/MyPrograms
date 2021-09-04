#include<iostream>
using namespace std;

int main()
{
    int n;
    int t=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==1)
        cout<<n<<" is not prime";
    else
        cout<<n<<" is prime";
    return 0;
}
    
