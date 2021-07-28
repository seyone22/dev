#include <iostream>

using namespace std;

int main()
{
    int miles, setOne, setTwo, price;
    cout << "Welcome to the Eclipse Car Rental Company dues calculator!\nTo get started, please enter the total mileage.\n";
    cin >> miles;
    if(miles > 100)
    {
        setOne = miles - 100;
        price = 2500 + setOne * 15;
    }
    else
    {
        price = miles * 25;
    }
    cout << "The amount due is - Rs." << price << endl;
    system("pause");
    return 0;
}