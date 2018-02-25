#include <iostream>
using namespace std;
int main() 
{
    int a, d, n, v, s=0, i;
 
    cout<<"Enter the number of terms \n";
    cin>>n;
 
    cout<<"Enter the values\n";
    cin>>a>>d;
    v = a;
    for(i = 0; i <n; i++)
    {
     cout<< v<<" ";
     s=s+v;
     v = v + d;
    }
 cout<<"\n Sum of A.P is:"<<n<<s;
 
 return 0;
}
