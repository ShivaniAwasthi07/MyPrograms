#include<iostream>
#include<cstring>
using namespace std;
void UpperString(char str[20],int i)
{
    if(str[i]=='\0')
    {   cout<<"NoUppercase Letter";
        return;
    }
    if(str[i]>=65 && str[i]<=90)
    {     cout<<(str[i]);
         return;
    }
    else
    {
        UpperString(str,i+1);
    }
    return;
}
int main()
{
    char str[20];
    gets(str);
    UpperString(str,0);
    return 0;

}