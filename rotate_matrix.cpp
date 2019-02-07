#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(int a[1000][1000],int r,int c)
{
    for(int i=0;i<c;i++)
    {
        for(int j=0, k=c-1;j<k;j++,k--)
        {
            swap(a[j][i],a[k][i]);
        }
    }
}
void transpose(int a[1000][1000],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
}
void rotate(int a[1000][1000],int r,int c)
{
    transpose(a,r,c);
    reverse(a,r,c);
}
int main() {
    int r,c;
    cin>>r;
    int a[1000][1000];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>a[i][j];
        }
    }
    rotate(a,r,r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
	return 0;
}
