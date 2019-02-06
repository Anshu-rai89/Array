#include<iostream>
using namespace std;
int mx(int a ,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	return b;
}
void res(int *a1,int *a2,int n1,int n2)
{
int k=0,i,j;
int sum1=0,sum2=0;
int resu=0;
	//recursive case
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a1[i]<a2[j])
			{
				sum1+=a1[i];
			}
			else if (a1[i]==a2[j])
			{
				resu=mx(sum1,sum2)+a1[i];
			}
			else
			{
				sum2+=a2[j];
			}
			
		}
	}
	cout<<resu;

}
int main ()
{
	int n1,n2;
	cin>>n1;
	int a1[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>a1[i];
	}
	cin>>n2;
	int a2[n2];
	for(int j=0;j<n2;j++)
	{
		cin>>a2[j];
	}
	res(a1,a2,n1,n2);
	
	
}
