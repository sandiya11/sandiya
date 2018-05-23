#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int temp,i=0,j=0;
    char s[50];
    cin>>s;
    j=strlen(s)-1;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
        
    }
    cout<<s;
}

