#include <iostream>
#include<string.h>
using namespace std;
int main()

{
	char a[10];
	cout<<"enter the number"<<endl;
	cin>>a;
	int i,flag=0,n;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='1' || a[i]=='0')
		{
			flag=1;
		}
		else
        {
         flag=0;
       }
	}
	if(flag==1)
	{
	    cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
