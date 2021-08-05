#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cin >> input;
    switch (input)
    {
    case 1:
        cout << "Line\n";
        break;
    case 2:
        cout << "Angle\n";
        break;
    case 3:
        cout << "Triangle\n";
        break;
    case 4:
        cout << "Square\n";
        break;
    case 5:
        cout << "Pentagon\n";
        break;
    case 6:
        cout << "Hexagon\n";
        break;
    case 7:
        cout << "Heptagon\n";
        break;
    case 8:
        cout << "Octagon\n";
        break;
    case 9:
        cout << "Nonagon\n";
        break;
    case 10:
        cout << "Decagon\n";
        break;
    default:
        cout << "polygon";
        break;
    }
}