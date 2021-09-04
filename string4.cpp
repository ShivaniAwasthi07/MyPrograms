#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str<<endl;
    //str.clear();
    if(str.empty())
        cout<<"string is empty";
    else
        cout<<"string is not empty";
}