#include <iostream>
using namespace std;

int main()
{
int i,no, f=0, s=1, n;

cout<<"Enter the value:\n ";
cin>>no;
cout<<"Fibonacci series\n";
for(i=0; i<no; i++)
{
cout<<f<<endl;
n= f + s;
f= s;
s = n;

}
return 0;
}
