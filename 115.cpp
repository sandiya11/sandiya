#include<iostream>
using namespace std;
int main()
{
	int n,k,a[10],i,j,temp=0;
	cin>>n>>k;;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<a[k];
	return 0;	
}
