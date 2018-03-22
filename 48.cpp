#include <iostream>
using namespace std;
int main() 
{
int i,n,a[10],sum=0,avg;
cout<<"enter array size"<<endl;
cin>>n;
cout<<"enter the elements"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
cout<<avg<<endl;
return 0;
}
