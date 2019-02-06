#include<iostream>
using namespace std;
void sum(int a[],int n)
{
	int i,j,left[100],right[100];
	int x=0;
	left[0]=a[0];
	cout<<left[0]<<" ";
	for(i=1;i<n;i++)
	{
	left[i]= max(left[i-1],a[i]);
	cout<<left[i]<<" ";
	
	}
	cout<<endl;

	right[n-1]=a[n-1];
	cout<<right[n-1]<<" ";
	for(i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],a[i]);
		cout<<right[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
x=x+min(left[i],right[i])-a[i];
	}
	cout<<x;
}
int main()
{
	int i,n,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sum(a,n);
}
