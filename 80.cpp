#include<iostream>
using namespace std;
int main()
{
int a,n;
cout<<"enter the values"<<endl;
cin>>a;
while(a!=0)
{
n=a%10;
a=a/10;
if(n%2!=0)
 {
 cout<<n<<" ";
 }
}
return 0;
}  
