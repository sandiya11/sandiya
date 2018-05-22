#include <iostream>

using namespace std;
int main() 
{
    int A,B,C,i,sum=0;
    cout<<"enter the first number\n";
    cin>>A;
    cout<<"enter the difference\n";
    cin>>B;
    cout<<"enter the number of terms\n";
    cin>>C;
    for(i=0;i<C;i++)
    {
        sum=sum+(A+i*B);
   }
    cout<<sum;
}
    
