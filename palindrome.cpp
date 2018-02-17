#include <iostream>
using namespace std;

int main() {
	int a,b,c,d=0;
	cout<<"enter the number\n";
	cin>>a;
	b=a;
	while(a!=0)
	
	{
		c=a%10;
		d=d*10+c;
		a=a/10;
	}
		if(d==b)
		{
			cout<<"it is palindrome\n";
			
		}
	else
	{
		cout<<"it is not a palindrome";
	}
	
	return 0;
}
