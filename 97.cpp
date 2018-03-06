#include <iostream>
using namespace std;

int main()
{
	int n,num,rev;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"reverse :"<<endl;
	while(n!=0)
	{
	num=n%10;
	rev=rev*10+num;
	n=n/10;
	}
	cout<<rev;
	return 0;
}
