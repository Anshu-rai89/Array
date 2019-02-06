#include<iostream>
#include<algorithm>
using namespace std;
void targetsum(int a[],int n,int x)
{
	int i,j;
	sort(a,a+n);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==x)
			{
				cout<<a[i]<<" "<<"and"<<" "<<a[j];
				cout<<endl;
				
			}
		}
	}
}
int main ()
{
	int i,j,n,x,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	targetsum(a,n,x);
	return 0;
}
