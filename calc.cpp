#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"input two digits";
    cin>>a>>b;
    cout<<"Input operator";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        case '%':
            cout<<a%b<<endl;
            break;
        default:
            cout<<"Enter another operator";
    }


}