#include <iostream>

using namespace std;

int main()
{
    int height, weight;
    cout << "This program will calculate your BMI.\nEnter a your height below (in cm)\n";
    cin >> height;
    cout << "Enter your weight (in kg)\n";
    cin >> weight;
    if (weight < height / 2.5)
    {
        cout << "Underweight\n";
    }
    else if (weight >= height / 2.5 && weight <= height / 2.3)
    {
        cout << "Normal\n";
    }
    else if (weight > height / 2.3)
    {
        cout << "Overweight\n";
    }
    system("pause");
    return 0;
}