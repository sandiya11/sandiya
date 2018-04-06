#include <iostream>
using namespace std;
int main() 
{
	int i,n,k,array[20];
	cout<<"enter the values"<<endl;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>array[i];
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			cout<<array[i];
			break;
		}
	}
	return 0;
}
