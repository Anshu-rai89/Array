#include<iostream>
using namespace std;
void spiralprint(int a[][100],int r,int c)
{
	int i,j,strow=0,stcol=0,endrow=r-1,endcol=c-1;
	while((strow<=endrow) && (stcol<=endcol))
	{
		for(j=endcol;j>=stcol;j--)
		{
			cout<<a[strow][j]<<",";
	
		}
		strow++;
		for(i=strow;i<=endrow;i++)
		{
			cout<<a[i][stcol]<<",";
		
		}
		stcol++;
	
		if(endrow>strow){
		
		for(j=stcol;j<=endcol;j++)
		{
			cout<<a[endrow][j]<<",";
		}
	}
		endrow--;
		if(stcol<endcol)
		{
		
		for(i=endrow;i>=strow;i--)
		{
			cout<<a[i][endcol]<<",";
	
		}
	}
		endcol--;
	}
}
int main()
{
	int i,j,r,c,a[100][100];
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	spiralprint(a,r,c);
	return 0;
}
