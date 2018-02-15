 #include <iostream>
using namespace std;

int main()  
{
	char C;
	cout<<"enter the letter\n";
	cin>>C;
	if(C<='A'&& C>='Z'||C<='a'&&C>='z')
	{
	cout<<"the letter is alphabet";
	}
else
{
	cout<<"the letter is notalphabet";
}
}
