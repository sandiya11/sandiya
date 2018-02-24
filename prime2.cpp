#include <iostream>
using namespace std;

int main()
{
    int min, max, i, num;

    cout << "Enter two numbers:\n ";
    cin >> min >> max;

    cout << "Prime numbers between " << min << " and " << max<< " are: ";

    while (min < max)
    {
        num = 0;

        for(i = 2; i <= min/2; ++i)
        {
            if(min % i == 0)
            {
                num = 1;
                
            }
        }

        if (num == 0)
            cout << min << " ";

        ++min;
    }

    return 0;
}
