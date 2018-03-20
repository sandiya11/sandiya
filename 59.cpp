#include <iostream>
using namespace std;
int main() 
{

	int a[20];

	int n,i,max=a[0];

	cout<<"enter the number of elements\n";

	cin>>n;

	cout<<"enter the  elements\n";

	for(i=0;i<n;i++)

	{

		cin>>a[i];

	}

	for(i=0;i<n;i++)

	{

		if(a[i]>max)

		{

			max=a[i];

		}

	}

cout<<max;

	return 0;

}
