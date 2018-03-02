#include <iostream>
using namespace std;
int main() 
{
	int n1,n2,n;
	cout<<"enter the number:\n";
	cin>>n1>>n2;
	n=n1*n2;
	cout<<n<<endl;
	if(n%2==0)
	{
		cout<<"it is even";
	}
	else
	{
		cout<<"it is odd";
	}
	return 0;
}
