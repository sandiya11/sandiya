#include <iostream>
using namespace std;

int main()  
{
int a[10],i,n;
cout<<"enter the element in array"<<endl;
cin>>n;

int sum=0;
if(n>=0)
{

for(i=1;i<=n;i++)
{
	cout<<i<<endl;
}
int var;
cout<<"enter position";
cin>>var;
cout<<var<<endl;
for(i=0;i<=var;i++)
{
	sum=sum+i;
}
cout<<"sum of number is:"<<sum;
}
else
{
	cout<<"invalid number";
}
	return 0;
}
