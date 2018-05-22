#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,m,z,i;
    char a[10];
    cin>>a>>n;
    m=strlen(a);
    z=m-n;
    for(i=z;i<m;i++)
	{
	    cout<<a[i];
	}
}
