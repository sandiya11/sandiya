#include <iostream>
using namespace std;

int main()
{
int num;
cout<<"enter the minutes\n";
cin>>num;
if ( (num / 60) == 1 ) 
{
cout<<"hours\n"<<num/60;
}
else 
{
cout<<"hours\n"<<num/60;
}
if ( (num % 60) == 1) 
{
cout<<" \nminute\n"<<num%60;
}
else
{
cout<<"\nminutes\n"<<num%60;
}
return 0;
}
