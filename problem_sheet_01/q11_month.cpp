#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "This program will read an integer, and tell you the month it corresponds to in the Gregorian Calendar\nEnter a number below\n";
    do
    {
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "January\n";
            break;
        case 2:
            cout << "February\n";
            break;
        case 3:
            cout << "March\n";
            break;
        case 4:
            cout << "April\n";
            break;
        case 5:
            cout << "May\n";
            break;
        case 6:
            cout << "June\n";
            break;
        case 7:
            cout << "July\n";
            break;
        case 8:
            cout << "August\n";
            break;
        case 9:
            cout << "September\n";
            break;
        case 10:
            cout << "October\n";
            break;
        case 11:
            cout << "November\n";
            break;
        case 12:
            cout << "December\n";
            break;
        default:
            cout << "No such month\n";
            break;
        }
    } while (true);
    return 0;
}