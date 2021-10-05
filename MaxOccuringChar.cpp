#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50];
    char ans;
    int f[123]={0};
    gets(str);
    int l=strlen(str);
    int max=0;
    for(int i=0;i<l;i++)
    {   if(str[i]==' ')
            continue;
        f[str[i]]++;
    }
    for(int i=0;i<l;i++)
    {
        if(max<f[str[i]])
        {
            max=f[str[i]];
            ans=str[i];
        }
    }
    cout<<ans;
    
}