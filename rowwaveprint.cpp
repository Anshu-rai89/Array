#include<iostream>
using namespace std;
void waveprint (int a[][100],int r,int c)
{
	int i,j;
	for(j=0;j<c;j++)
	{
		if(j&1)
		{
			for(i=r-1;i>=0;i--)
			{
				cout<<a[i][j]<<",";
			}
		}
		else
		{
			for(i=0;i<r;i++)
			{
				cout<<a[i][j]<<",";
			}
		}
	
	}
	cout<<"END";
}
int main()
{
	int i,j,a[100][100],r,c;
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
}

	waveprint(a,r,c);
	return 0;
	
	
	
}
