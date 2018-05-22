#include<iostream>
#include<string>
using namespace std;
int main()
 {
    int i;
    string s;
    getline(cin,s);
    for(i=0;i<s.size();++i)
    {
        if(i==0)
        {
            if(islower(s[i]))
            s[i]=toupper(s[i]);
        }
        else
        {
        if(s[i]!=' ')
            {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            }
            else
            {
                i++;
                if(islower(s[i]))
                {
                    s[i]=toupper(s[i]);
                }
            }
        }
    }
    cout<<s;
    }
