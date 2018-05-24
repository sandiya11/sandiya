#include<iostream>
using namespace std;
int main()
{
string a,b;
int m,n,count=0,cnt=0;
cin>>a>>b;
m=a.length();
n=b.length();
for(int i=0;i<m;i++)
{
for(int j=i+1;j<m;j++)
{
if(a[i]==a[j])
count++;
}
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(b[i]==b[j])
cnt++;
}
}
if(count==cnt)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}
