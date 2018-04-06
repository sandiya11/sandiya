#include <iostream>
using namespace std;
int main()
{
int n1,n2,m,n;
cout<<"enter the numbers"<<endl;
cin>>n1>>n2;
m=n1;
n=n2;
while(m!=n)
{
if(m<n)
{
m=m+n1;
}
else
{
n=n+n2;
}
}
cout<<m;
return 0;
}
