#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;
    if(savings>5000)
    {
        if(savings>10000)
            cout<<"road trip with neha\n";
        else
            cout<<"shopping with neha\n";
    }
    else if (savings>2000)
        cout<<"rashmi\n";
    else
        cout<<"friends\n";
        return 0;
    
}
