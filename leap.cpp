 #include <iostream>
using namespace std;

int main()  
{
	int yr;
            cout<<"enter the year\n";
	cin>>yr;
	if((yr%4==0)&&(yr%100!=0))
	{
	cout<<"this is a leap year";
	}
     else if(yr%100==0)
      {
	cout<<"this is not a leap year";
       }
    else if(yr%400==0)
     {
	cout<<"this is a leap year";
     }
     else
     {
     	cout<<"this is not a leap year";
     }
return 0;
}
