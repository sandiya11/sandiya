#include <iostream>
using namespace std;
int main()
{
 int i, j, a, n, num[30];
 cout<<"Enter the value :\n";
 cin>>n;
 cout<<"Enter the numbers \n";
 for (i = 0; i < n; ++i)
 {
  cin>>num[i];
 }
  for (i = 0; i < n; ++i) 
  {
 for (j = i + 1; j < n; ++j)
 {
 if (num[i] > num[j])
 {
 a =  num[i];
 num[i] = num[j];
 num[j] = a;
 }
 }
 }
cout<<"The numbers arranged in ascending order: ";
 for (i = 0; i < n; ++i)
 {
 cout<<num[i]<<endl;
 }
 return 0;
}
