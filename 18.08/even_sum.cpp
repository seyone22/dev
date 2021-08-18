//This program will find the sum of all the even numbers, 1 to 20 inclusive.
#include <iostream>

using namespace std;

int main()
{
    int i = 1, divInt = 0, count = 0;
    double divDouble = 0;
    do
    {
        for (int i; i % 2 == 0; i++)
        {
            count = count + i;
        }
    } while (i < 20);
    cout << count << endl;
    system("pause");
    return 0;
}