#include <iostream>
#include<string.h>
using namespace std; 
int main()
{
string s;
int set = 0;
cin>>s;
for(int i = 0;i <= s.length()-1;i++)
{
    if(s[i] >= '0' && s[i] <= '9')
    {
        set = 0;
    }
    else
    {
        set = 1;
        break;
    }
}
if(set == 0)
{
    cout<<" numeric"; 
}
else
{
    cout<<" not numeric"; 
}
return 0;
}
