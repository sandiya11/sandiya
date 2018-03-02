#include <iostream>
using namespace std;

int main()
{
	int n1,n2,n;
	cout<<"enter the number:\n";
	cin>>n1>>n2;
	cout<<"before swappig"<<endl;
	cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
	n=n1;
	n1=n2;
	n2=n;
	cout<<"after swapping"<<endl;
	cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
	return 0;
}
