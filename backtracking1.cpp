#include<iostream>
using namespace std;
bool isSafe(int** arr,int i,int j,int n)
{
    if(i<n && j<n && arr[i][j]==1)
        return true;
    return false;
}
bool ratinMaze(int** arr,int i,int j,int n,int** solArr)
{
    if(i==n-1 && j==n-1)

    if(isSafe(arr,i,j,n))
    {
        solArr[i][j]=1;
        if(ratinMaze(arr,i+1,j,n,solArr))
            return true;
        if(ratinMaze(arr,i,j+1,n,solArr))
            return true;
        solArr[i][j]=0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    int solArr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            solArr[i][j]=0;
    }
    if(ratinMaze(arr,0,0,n,solArr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
}