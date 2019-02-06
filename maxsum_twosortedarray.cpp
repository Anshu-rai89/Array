#include<iostream>
using namespace std;
void maxsum(int *a1,int *a2,int n1,int n2)
{
	int i=0,j=0,maxsum=0,sum1=0,sum2=0;
	while(i<n1 && j<n2)
	{
		if(a1[i]<a2[j])
		{
			sum1+=a1[i];
			i++;
		}
		else if(a1[i]>a2[j])
		{
			sum2+=a2[j];
			j++;
		}
		else
		{
			sum1+=a1[i];
			sum2+=a2[j];
			i++;
			j++;
			maxsum=maxsum+max(sum1,sum2);
			sum1=0;
			sum2=0;
		}
	}
	while(i<n1)
	{
		sum1+=a1[i];
		i++;
	}
	while(j<n2)
	{
		sum2+=a2[j];
		j++;
	}
	maxsum=maxsum+max(sum1,sum2);
	cout<<maxsum;
}
int main()
{
	int n1,n2,i;
	cin>>n1;
	int a1[n1];
	for(i=0;i<n1;i++)
	{
		cin>>a1[i];
	}
	cin>>n2;
	int a2[n2];
	for (i=0;i<n2;i++)
	{
		cin>>a2[i];
	}
	maxsum(a1,a2,n1,n2);
}
