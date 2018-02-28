#include <iostream>
using namespace std;

int main()
{
	int min, a[50], size, i;
	cout<<"Enter Array Size:\n ";
	cin>>size;
	cout<<"Enter the elements : ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	}
	
	min=a[0];
	for(i=0; i<size; i++)
	{
		if(min>a[i])
		{
		min=a[i];
		}
	}
	cout<<"smallest  Number is:"<<min;
	return 0;
}
