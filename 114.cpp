#include<iostream>
using namespace std;
int main()
{
	int n,m,a[10],i,count=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	{
		count++;
		if(count==m)
		{
	    cout<<a[i];
		
		}
	}
	}
