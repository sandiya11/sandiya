#include <iostream>
using namespace std;
int main() 
{
	int a,b;
	cout<<"enter the value:\n";
	cin>>a>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"after swapping"<<endl;
	cout<<a<<endl<<b<<endl;
  return 0;
}
