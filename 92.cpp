#include <iostream>
using namespace std;
int main()
{
	
	int i, n, sum=0, num;
	cout<<"enter the value"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<sum;
	return 0;
}
