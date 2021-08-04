#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    int integer;

    do
    {
        cout << "This program will tell if the number you have entered is even or odd. Enter the number below \n";
        getline(cin, input);
        stringstream(input) >> integer;
        integer = integer % 2;
        if (input == "exit")
        {
            return 0;
        }
        else if (integer == 0)
        {
            cout << "your number is even\n";
        }
        else
        {
            cout << "your number is odd\n";
        }
    } while (true);
}