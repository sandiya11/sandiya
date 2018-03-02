#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter the number:\n";
	cin>>a>>b;
	cout<<"before swappig"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"after swapping"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}
