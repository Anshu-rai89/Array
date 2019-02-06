#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],j,no;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		no=a[i];
		for(j=i-1;j>=0 && a[j]>no;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=no;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
