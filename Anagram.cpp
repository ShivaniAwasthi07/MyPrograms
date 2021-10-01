#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[20],str2[20];
    int i,j,f=0,nf=0;
    gets(str1);
    gets(str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            f=0;
            for(j=0;j<len2;j++)
            {
                if(str1[i]==str2[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                nf=1;
                break;
            }
        }
        if(nf==1)
            cout<<"Not anagram";
        else
            cout<<"Anagram";

    }
    else
        cout<<"Not Anagram";
    return 0;
}