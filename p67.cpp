#include <iostream>
using namespace std; 
int main()
{
int num,i,fact=1;
 cin>>num;
 if(num>=1&&num<=25)
 {
 for(i=1;i<=num;i++)
{
    fact=fact*i;
    
}
    cout<<fact;
 }
    else
    {
        cout<<"invalid number";
    }
}
