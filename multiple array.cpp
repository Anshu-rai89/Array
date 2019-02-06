#include<iostream>
using namespace std;
void randomsum(int a[],int n)
{
	int i,j,sum,ms=0,c=0,f1,f2;
	float y;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if (ms<sum) 
			{
				ms=sum;
				cout<<" max is"<<ms<<endl;
				c++;
			}
			
		}
	}
	f1=(c*(c-1))/2;
	f2=(n*(n-1))/2;
	y=f1/f2;
	cout<<y;
	}
int main()
{
	int i,j,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
			randomsum(a,n);
		
	}
	return 0;
}
