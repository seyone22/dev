#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    int inputInt, v1, v2;
    //do
    //{
    cout << "This is a simple calculator program that can add, subtract, multiply, or divide two numbers. Please select the program mode from the options below.\n"
         << endl
         << "\t1.\tAdd the numbers\n"
         << "\t2\tSubtract the numbers\n"
         << "\t3\tMultiply the numbers\n"
         << "\t4\tDivide the numbers\n";
    cin.clear();
    getline(cin, input);
    stringstream(input) >> inputInt;
    cout << "Input the two numbers, seperated by a space.\n";
    cin >> v1 >> v2;
    switch (inputInt)
    {
    case 1:
        cout << "The sum is " << v1 + v2 << endl;
        break;
    case 2:
        cout << "The difference is " << v1 - v2 << endl;
        break;
    case 3:
        cout << "The product is " << v1 * v2 << endl;
        break;
    case 4:
        cout << "The quotient is " << v1 / v2 << endl;
        break;

    default:
        cout << "Wrong input";
        break;
    }
    return 1;

    //} while (true);
}