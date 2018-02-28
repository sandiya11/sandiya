#include <iostream>
using namespace std;

int main()
{
int a;
cout<<"enter the value:\n";
cin>>a;
if(a%2==0)
{
	a=a/2;
	cout<<a;
}
	else
	{
		a=a;
		cout<<a;
	}

	return 0;
}
