#include <iostream>
using namespace std;
void NoInWords(int n,int size,int i)
{if(size==0)
        return;
    NoInWords(n,size-1,i+1);
    if(i==4||i==3||i==1)
    {   int a;
        if(i==4)
            a=n/1000;
        if(i==3)
        {   a=n/100;
            a=a%10;
        }
        if(i==1)
            a=n%10;
        switch(a)
        {
            case 1:
                cout<<"One ";
                break;
            case 2:
                cout<<"Two ";
                break;
            case 3:
                cout<<"Three ";
                break;
            case 4:
                cout<<"Four ";
                break;
            case 5:
                cout<<"Five ";
                break;
            case 6:
                cout<<"Six ";
                break;
            case 7:
                cout<<"Seven ";
                break;
            case 8:
                cout<<"eight ";
                break;
            case 9:
                cout<<"Nine ";
                break;
            
            
        }
        if(i==4)
            cout<<"Thousand ";
        if(i==3 && a!=0)
        {
                if(n%100==0)
                    cout<<"Hundred ";
                else
                    cout<<"Hundred and ";
        }
    }           
    if(i==2)
    {
         int a;
        a=n/10;
         a=a%10;
        switch(a)
        {
            case 1:
                cout<<"Ten ";
                break;
            case 2:
                cout<<"Twenty ";
                break;
            case 3:
                cout<<"Thirty ";
                break;
            case 4:
                cout<<"forty ";
                break;
            case 5:
                cout<<"fifty ";
                break;
            case 6:
                cout<<"Sixty ";
                break;
            case 7:
                cout<<"Seventy ";
                break;
            case 8:
                cout<<"eighty ";
                break;
            case 9:
                cout<<"Ninty ";
                break;
}}}
int main()
{
    int n,r,size=0;
    cin>>n;
    if(n==0)
    {   cout<<"Zero";
        return 0;
    }
    int d=n;
    while(d)
    {   r=d%10;
        d=d/10;
        size++;
    }
    if(n>=11 && n<=19)
    {
    switch(n)
    {
         case 11:
                cout<<"Eleven ";
                break;
            case 12:
                cout<<"Twelve ";
                break;
            case 13:
                cout<<"Thirteen ";
                break;
            case 14:
                cout<<"fourteen  ";
                break;
            case 15:
                cout<<"fifteen ";
                break;
            case 16:
                cout<<"Sixteen ";
                break;
            case 17:
                cout<<"Seventeen ";
                break;
            case 18:
                cout<<"eighteen ";
                break;
            case 19:
                cout<<"Ninteen ";
                break;}
    return 0;
    }
    NoInWords(n,size,1);
}