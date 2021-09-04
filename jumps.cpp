#include<iostream>
using namespace std;

int main()
{
    int pm=3000;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
            continue;
        if(pm==0)
            break;
        cout<<"go out today!"<<endl;
        pm=pm-300;

    }
    return 0;
} 