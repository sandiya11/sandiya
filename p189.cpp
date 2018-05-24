#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if(a,b,c<=100000)
{
    if(a!=b&&b!=c&&c!=a)
    {
        cout<<"scalene triangle";
        
    }
    else
    {
    cout<<"not scalene triangle";
    }
}
else
{
    cout<<"invalid number";
}
}
