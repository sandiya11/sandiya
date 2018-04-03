#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the number"<<endl;
    cin>>i;
    string str = to_string(i);
    for(i = 0;i < str.length();i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}
