#include <iostream>
using namespace std;

int main() 
{
    int i, num;
    cout<<"Enter the number:\n";
    cin>>num;
    cout<<"the factor of numbers\n";
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
           cout<<i<<endl;
        }
    }

    return 0;

}
