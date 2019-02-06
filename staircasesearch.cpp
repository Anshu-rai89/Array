#include<iostream>
using namespace std;
void staircase(int a[301][301],int r,int c,int key)
{ int i=0,j=c-1,flag=0;
	while(i<=r && j>=0)
	{
	
	
	if(a[i][j]==key)
	{
		flag=1;
		break;
	}
	else if(a[i][j]>key)
	{
		j--;
	}
	else
	{
		i++;
	}
}
cout<<flag;

	
}
int main()
{
	int i,j,r,key,c;
	cin>>r>>c;
	int a[301][301];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>key;
	staircase(a,r,c,key);
}
