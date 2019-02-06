#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int i,n,a[100],j,no;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[i-1]>a[i])
			{
				swap(&a[i-1],&a[i]);
			}
			else if(a[i+1]>a[i])
			{
				swap(&a[i+1],&a[i]);
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
