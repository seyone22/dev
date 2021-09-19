//Author: S.G.Seyone (2019/ICT/46)

//Write a program to read some integer numbers from the user and print the numbers.
//Then find the summation of the numbers.

#include <iostream>

using namespace std;

int main()
{
    int counter = 1, runningTot = 0;
    string selector;
    do
    {
        cout << "This program will calculate the the sum of given numbers. To start, enter how many numbers you want to sum up\n";
        cin >> counter;
        int inputNumbers[counter];

        for (int i = 0; i < counter; i++)
        {
            cout << "Enter the number";
            cin >> inputNumbers[i];
        }
        cout << "Your numbers have been recorded.\nThe numbers you have entered are,\n";

        for (int j = 0; j < counter; j++)
        {
            cout << "\t" << inputNumbers[j] << endl;
        }
        cout << "The summation of the numbers entered is ";
        for (int k = 0; k < counter; k++)
        {
            runningTot += inputNumbers[k];
        }
        cout << runningTot;
        cout << "\nDo you want to do another count? (Y/N)";
        cin >> selector;
    } while (selector == "T" || selector == "t");

    return 0;
}
