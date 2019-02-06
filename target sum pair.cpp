#include<iostream>
using namespace std;
void target(int a[],int n,int tar)
{
	int i,j,k,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=i;k<j;k++)
			{
				sum=sum +a[k];
				
				if(sum==tar)
				{
					cout<<"pair found "<<a[i]<<"And"<<a[j];
	
				}
				cout<<endl;
			}
		}
	}
}
int main ()
{
	int i,j,tar ,n,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter target sum"<<endl;
	cin>>tar;
	target(a,n,tar);
}
