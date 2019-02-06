#include<iostream>
using namespace std;
void lederefficent(int *a,int n)
{
	int maxright=a[n-1];
	cout<<maxright<<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>=maxright)
		{
			maxright=a[i];
			cout<<maxright<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
//	lederefficent(a,n);

 for(int i=0;i<n;i++)
{ int j;
  	for( j=i+1;j<n;j++)
		{
		
		if(a[i]<=a[j])
		{ 
		break;  
	

         }
     }
     if(j==n)
     {
     	cout<<a[i]<<" ";
	 }
}
//out<<a[n-1];
}

