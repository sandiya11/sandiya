#include <iostream>
using namespace std;
int main()
{
char s[30];
int i,m,n;
cout<<"enter the string:\n";
cin>>s;
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
m=m+1;
}
}
if(m==0)
cout<<"the  string not contains numbers";
else
cout<<"the string contains numbers";
return 0;
}
