#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    do
    {
        char input[4];
        cout << "This program will sort 4 input characters alphabetically.\nPlease enter four characters seperated by spaces. Do not enter special characters or numbers. The program will break.\n";
        cin >> input[0] >> input[1] >> input[2] >> input[3];
        sort(input, input + 4);
        cout << input[4] << endl;
    } while (true);
}