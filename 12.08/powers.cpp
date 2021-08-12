//This program will find the value of the number multiplied to a given power.
#include <iostream>

using namespace std;

int main()
{
    double input0 = 0, input1 = 0, temp = 1;
    cout << "Enter the number and the power you want to multiply by, seperated by a space\n";
    cin >> input0 >> input1;
    for(int i = input1; input1 >= 1; input1--)
    {
        temp = temp * input0;
    }
    cout << temp;
    return 0;
}