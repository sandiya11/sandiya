#include <iostream>
using namespace std;

int main()
{
	int min, a[10], s, i;
	cout<<"Enter the size of array\n ";
	cin>>s;
	cout<<"Enter the elements :\n ";
	for(i=0; i<s; i++)
	{
		cin>>a[i];
	}
	
	min=a[0];
	for(i=0; i<s; i++)
	{
		if(min>a[i])
		{
		min=a[i];
		}
	}
	cout<<"minimum value is:"<<min;
	return 0;
}
