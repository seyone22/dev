#include <iostream>
#include <string>

using namespace std;

int main()
{
    char check = 'y';
    string str, checkV;
    do
    {
        int miles, setOne, setTwo, price;
        cout << "Welcome to the Eclipse Car Rental Company dues calculator!\nTo get started, please enter the total mileage.\n";
        getline(cin, str);
        miles = stoi(str); //inputting a non-numeric character will throw an error.
        //cin >> miles;
        if (checkV == "Y" || checkV == "y")
        {
            if (miles > 100)
            {
                setOne = miles - 100;
                price = 2500 + setOne * 15;
            }
            else
            {
                price = miles * 25;
            }
        }
        else if (checkV == "N" || checkV == "n")
        {
            cout << endl;
            return 0;
        }
        else
        {
            cout << "Please enter a valid selection.\n";
        }

        cout << "The amount due is - Rs." << price << endl;
        cout << "Would you like to check another value? (Y/N)" << endl;
        //cin >> check; // have to figure out error handling if spaces or unexpected data is inputted
        getline(cin, checkV);
    } while (checkV == "Y" || checkV == "y");
}