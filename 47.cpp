#include <iostream>
using namespace std;
int main() 
{
	int a[20],i,n,max,min;
	cout<<"enter size array"<<endl;
	cin>>n;
	cout<<"array elements are"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	 max=a[0];
	 min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<min<<endl;
	cout<<max<<endl;
  return 0;
}
