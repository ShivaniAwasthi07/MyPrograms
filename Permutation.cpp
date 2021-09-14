#include<iostream>
#include <cstring>
using namespace std;
static int temp1;
void Permutation(string str, int start, int end) 
{
    if(start==end)
        cout<<endl<<str;
    else{
        for(int i=start;i<=end;i++)
        {
            temp1=str[start];
            str[start]=str[i];
            str[i]=temp1;
            Permutation(str,start+1,end);
            temp1=str[start];
            str[start]=str[i];
            str[i]=temp1;
        }
    }
}  
int main()
{
    char str[20];
    gets(str);
    int n=strlen(str);
    cout<<"Permutations are:";
    Permutation(str,0,n-1);
}