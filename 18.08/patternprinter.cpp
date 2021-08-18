//this program prints out a pattern
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}