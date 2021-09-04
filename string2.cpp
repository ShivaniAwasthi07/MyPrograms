#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    s1.clear();
    s2.clear();
    cout<<s1<<"ooooo"<<s2;
}