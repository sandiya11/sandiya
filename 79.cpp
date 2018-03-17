#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int n1, n2,p,n,sqr;
	cout<<"Enter the numbers"<<endl;
	cin>>n1>>n2;
	n=n1*n2;
	sqr=sqrt(n);
	p=sqr;
	if(p==sqr)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
