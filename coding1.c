#include<stdio.h>
int main()
{
    int n,c,i,j,a[n];
    /*write a program to print all the unique elements of an arrow*/
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c==1)
            printf("%d ",a[i]);
    }
}