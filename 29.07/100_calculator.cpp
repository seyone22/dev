#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    int number;
    cout << "This program will tell you if the number you have entered is above 100 or not. That's it... really.\nTo start, ";
    do
    {
        cout << "please enter a number\n";
        getline(cin, input);
        stringstream(input) >> number;
        if (number == 100)
            cout << number << " is 100.\n";
        else if (number > 100)
            cout << number << " is greater than 100\n";
        else if (number < 100)
            cout << number << " is lesser than 100\n";
    } while (true);
    return 0;
}