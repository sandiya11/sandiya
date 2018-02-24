#include <iostream>
using namespace std;
int main()
 
{
 
  int n1, n2, i, temp, num, rem;
 
  cout<<"Enter two numbers: \n";
 
  cin>>n1>>n2;
 
  cout<<"Armstrong numbers between two numbers are\n";
 
  for(i=n1+1; i<n2; ++i)
 
  {
 
      temp=i;
 
      num=0;
 
      while(temp!=0)
 
      {
 
          rem=(temp%10);
 
          num+=rem*rem*rem;
 
          temp/=10;
 
      }
 
      if(i==num)
 
      {
 
         cout<<i<<" ";
 
      }
 
  }
 
  return 0;
 
}
