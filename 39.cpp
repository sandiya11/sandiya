#include<iostream>
using namespace std;
int main()
{
int x,max=0,i;
cout<<"Enter the values"<<endl;
for(i=0;i<10;i++)
{
cin>>x;
if(x>max)
max=x;
}
cout<<max<<endl;
return 0;
}
