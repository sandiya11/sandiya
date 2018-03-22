#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[10],b[10];
int m,n;
cout<<"enter two strings:"<<endl;
cin>>a>>b;
m=strlen(a);
n=strlen(b);
if(m>n)
{
cout<<a;
}
else
{
cout<<b;
}
return 0;
}
