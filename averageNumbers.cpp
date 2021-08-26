//Author: S.G.Seyone (2019/ICT/46)

//This program will find the average of numbers entered by the user
//If the number is negative, it will display the average of numbers entered till that point.

#include <iostream>

using namespace std;

int main()
{
    int input, runningTotal, looper = 0;
    do
    {
        cout << "Enter a number\n";
        cin >> input;
        if (input % 2 == 0)
        {
            runningTotal += input;
        } else
        {
            looper = 1;
            cout << "The running total is " << runningTotal << endl;
        }
    } while (looper == 0);
    return 0;
}