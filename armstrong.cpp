#include<iostream>
using namespace std;
int main()
{
	
	int n, m, num=0, rem;
	cout<<"Enter the number :\n ";
	cin>>n;
	 m=n;
	if (n<=10000)
	while(m!=0)
	{
		rem=m%10;
		num=num + rem*rem*rem;
		m=m/10;
	}
	if(num==n)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"Not a Armstrong Number";
	}
	return 0;
}
