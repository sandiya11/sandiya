#include <iostream>
# include<math.h>

using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b;
    if((a<=1)&&(a>=5)&&(b<=1)&&(b>=50))
    {
    c=pow(a,b);
    cout<<c;
    }
    else
    {
    cout<<"invalid number";
    }
}
