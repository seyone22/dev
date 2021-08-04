#include <iostream>

using namespace std;

int main()
{
    double input;
    do
    {
        cout << "This program will tell you if your input is a solution for the equation 3x-15=0\nEnter your value below. ENTER ONLY NUMBERS. YOU HAVE BEEN WARNED.\n";
        cin >> input;
        if (3*input - 15 == 0)
            cout << "Yeah, " << input << " is a solution to that equation.\n";
        else
            cout << "Nope. Not a solution. Try again.\n";
    }while(true);
}