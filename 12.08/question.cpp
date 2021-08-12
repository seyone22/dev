#include <iostream>

using namespace std;

int main()
{
    double input = 0, factorial = 1;
    cout << "Enter a number\n";
    cin >> input;
    for(int i = 1; i <= input; i++)
    {
        factorial = i * factorial;
    }
    cout << factorial << endl;
}