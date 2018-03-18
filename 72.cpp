#include<iostream>
using namespace std;
int main()
{
    char a[20];
    cout<<"enter the string"<<endl;
    cin>>a;
    int i,count=0;
    for(i=0;i<10;i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
    count++;
     }
    }
     if(count!=0)
     {
     cout<<"yes";
     }
     else
     {
     cout<<"no";
     }
     return 0;
}
