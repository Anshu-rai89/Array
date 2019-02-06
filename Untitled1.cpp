#include<iostream>
using namespace std;
int sum( int a[], int n)
{

	int left[100],right[100],x=0,i;
	left[0]=a[0];
	for(i=1;i<n;i++)
	{
	left[i]= max(left[i-1],a[i]);
	
	}

	right[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],a[i]);
	}
	for(i=0;i<n;i++)
	{
x=x+min(left[i],right[i])-a[i];
	}
	return x;
}
int main() {
    int i,t,y;
 int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
      y=sum(a,n);
      cout<<" water is "<<" "<<y<<endl;
    }
}
