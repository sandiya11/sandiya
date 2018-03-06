#include <iostream>
using namespace std;
int main()
{
int n,i,x;
cin>>n;
for(i=1;i<=n;i++)
{
 x=x*2;
 if(x==n)
 {
	cout<<"it is a power of 2";
 }
}
if(x!=n)
{
cout<<"it is not a power of 2";
}
return 0;
}
