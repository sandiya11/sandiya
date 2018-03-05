#include <iostream>
using namespace std;

int main()
{	
        int num, i, count=0;
        cout<< Enter the number:\n ";
        cin>>num;
        for(i=2;i<num;i++)
        {
        if(num%i==0)
        {
        count++;
        }
        }
        if(count!=0)
        {
        cout<<"composite Number";
        }
        else
        {
        cout<<"not composite number"
        }
        return 0;
}
