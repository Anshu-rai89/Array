#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{ int sum1=0,sum2=0;
		for(int j=0;j<i;j++)
		{
			sum1+=a[j];
			
		}
		cout<<"sum 1 is "<<sum1<<" ";
		cout<<endl;
		for(int k=i+1;k<n;k++)
		{
			sum2+=a[k];
		}
			cout<<"sum 2 is"<<sum2<<" "<<endl;
		if(sum1==sum2)
		{
			cout<<i;
			break;
		}
	}
}
