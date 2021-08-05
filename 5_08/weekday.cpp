#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Please enter a number\n";
    cin >> input;
    switch (input)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;

    default:
        cout << "Invalid number!";
        break;
    }
    cout << endl;
    system("pause");
    return 0;
}