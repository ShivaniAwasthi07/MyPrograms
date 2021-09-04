#include<iostream>
using namespace std;

int main()
{
    int j,row,col;
    cout<<"Input rows and columns";
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for( j=1;j<=col;j++)
        {
        if(i==1 || i==row||j==1||j==col)
        {
                cout<<"* ";
        }
        else
                cout<<"  ";
        }
         cout<<endl;
    }
       
        
}
