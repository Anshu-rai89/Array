#include<iostream>
using namespace std;
void kedane(signed int a[],signed int n)

    {int i;
	 signed int cs=0,ms=0;
        for(i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        else
        {
            ms= max(cs,ms );  
        }
    }
    cout<<ms<<endl;
    }
    int main()
    {
	
    int i,t;
    signed int n,a[100000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    

   }
   return 0;
}
   
