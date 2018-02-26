#include <iostream>
using namespace std;

int main()
{
	int max, a[50], size, i;
	cout<<"Enter Array Size:\n ";
	cin>>size;
	cout<<"Enter the elements : ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	}
	
	max=a[0];
	for(i=0; i<size; i++)
	{
		if(max<a[i])
		{
		max=a[i];
		}
	}
	cout<<"Largest Number is:"<<max;
	return 0;
}
