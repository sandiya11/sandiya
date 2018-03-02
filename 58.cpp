#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number:\n";
	cin>>a>>b;
	cout<<"before swappig"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"after swapping"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}
