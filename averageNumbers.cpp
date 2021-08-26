//Author: S.G.Seyone (2019/ICT/46)

//This program will find the average of numbers entered by the user
//If the number is negative, it will display the average of numbers entered till that point.

#include <iostream>

using namespace std;

int main()
{
    double input, runningTotal, looper = 0, average, i = 0;
    string tester;
    do
    {
        do
        {
            cout << "Enter a number\n";
            cin >> input;
            if (input > 0)
            {
                runningTotal += input;
                i++;
            }
            else
            {
                looper = 1;
                average = runningTotal / i;
                cout << "The average of all positive numbers enteres so far is is " << average << endl;
            }
        } while (looper == 0);
        cout << "Do you want to do another count? (Y/N)\n";
        cin >> tester;
    } while (tester == "Y" || tester == "y");
    return 0;
}