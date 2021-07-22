#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cout << "This program will perform numerical operations on two numbers. \n";
    cout << "Please enter the first number \n";
    cin >> num1;
    cout << "Please enter the second number \n";
    cin >> num2;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
    system("pause");
    return 0;
}