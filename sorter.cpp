#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    do
    {
        int input[3], temp;
        cout << "This program will sort 3 input numbers alphabetically.\nPlease enter 3 numbers seperated by spaces. Do not enter special characters or numbers. The program will break.\n";
        cin >> input[0] >> input[1] >> input[2];
        if (input[0] >= input[1])
        {
            temp = input[0];
        } else
        {
            temp = input[1];
        }
        if (input[2] >= temp)
        {
            temp = input[2];
        }
        cout << "the largest number is " << temp << endl;
    } while (true);
    system("pause");
    return 0;
}