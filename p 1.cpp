#include <iostream>

using namespace std;

int main()
{
    int n,r,m=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        m=m*10+r;
        n=n/10;
        
    }
    cout<<m;
}
