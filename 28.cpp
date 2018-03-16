#include <iostream>
using namespace std;

int main()
{
	int arr[10],i,n;
	cout<<"enter the size of  array"<<endl;
	cin>>n;
	cout<< "enter the elments"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<arr[i]<<i<<endl;
	}

	return 0;
}
