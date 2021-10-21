#include <iostream>
#include <string>

using namespace std;

//gives the color of any banknote depending on the value
//100 orange, 1000 green, 5000 yellow, 20 purple, 50 blue

int main()
{
    int denomination = 0;

    cout << "Please enter the denomnation of your banknote" << endl << ">>";
    cin >> denomination;

    switch (denomination)
    {
        case 20:
            cout << "The color is purple";
            break;

        case 50:
            cout << "The color is blue";
            break;
        
        case 100:
            cout << "The oolor is orange";
            break;

        case 1000:
            cout << "The color is green";
            break;

        case 5000:
            cout << "The color is yellow";
            break;

        default:
            cout << "INVALID DENOMINATION ENTERED!";
            break;
    }



    return 0;
}