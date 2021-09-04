#include<iostream>
using namespace std;
string movex(string s,char k)
{
    if(s.size()==0)
        return "";
    char ch=s[0];
    string ans=movex(s.substr(1),k);
    if(ch==k)
        return ans+ch;
    else
        return ch+ans;
}
int main()
{
    string str;
    char d;
    cin>>str>>d;
    cout<<movex(str,d);
}