#include <iostream>
using namespace std;
int main() 
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	num=num+1;
	while(num%10!=0)
	{
	    num=num+1;
	}
    cout<<num;
	return 0;
}
