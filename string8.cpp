#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str; 
    cin>>str;
    // for(int i=0;i<str.size();i++)
    // { 
    //     if(str[i]>='A' && str[i]<='Z')
    //     {    
    //         str[i] +=32;
    //         continue;
    //     }  
        
    //     if(str[i]>='a' && str[i]<='z') 
    //     {    
    //         str[i] -=32;
    //         continue;
    //     }
        
    // }
    // 
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
}