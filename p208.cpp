#include <iostream>
# include<math.h>

using namespace std;

int main() 
{
    int a,b,c,d,ans;
    cin>>a>>b>>c;
    if(a,b,c<=100000)
    {
    d=pow(a,b);
    ans=d%c;
    cout<<ans;
    }
    else
    {
    cout<<"invalid number";
    }
}
