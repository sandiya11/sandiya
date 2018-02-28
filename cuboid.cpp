#include <iostream>
using namespace std;

int main() 
{
int l,b,h,v,tsa;
cout<<"enter the value :\n";
cin>>l>>b>>h;
v=l*b*h;
tsa=2((l*b)+(b*h)+(h*l));
cout<<"volume of cuboid="<<v;
cout<<"total surface area of cuboid="<<tsa;
return 0;
}
