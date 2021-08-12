//This program will find the factorial of the input number.
#include <iostream>

using namespace std;

int main()
{
    double input = 0, factorial;
    do
    {
        factorial = 1;
        cout << "Enter a number\n";
        cin >> input;
        if (input < 0)
        {
            cout << "Invalid input!";
            return 0;
        }
        else if (input == 0)
        {
            cout << "1";
            return 0;
        }
        for (int i = 1; i <= input; i++)
        {
            factorial = i * factorial;
        }
        cout << factorial << endl;
    } while (true);
    return 0;
}
