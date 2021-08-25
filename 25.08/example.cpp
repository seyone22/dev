//This program will sum up the numbers you enter.
#include <iostream>

using namespace std;

int main()
{
    string input, another;
    int number, runningTotal;
    cout << "This program will sum up any number of numbers you enter. Please enter the numbers in the prompt below.\n";
    do
    {
        do
        {
            cout << "Enter your number:\n";
            cin >> number;
            runningTotal+=number;
            cout << "Do you want to enter more numbers? (Y/N)";
            cin >> input;
        } while (input == "y" || input == "Y");
        cout << "Your running total is " << runningTotal << endl;
        cout << "Do you want to start another count? (Y/N)";
        cin >> another;
    } while (another == "y" || another == "Y");
    system("pause");
    return 0;
}