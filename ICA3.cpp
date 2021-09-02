//Author: S.G.Seyone (2019/ICT/46)

//The program will find the minimum and maximum of the array which is hardcoded.

#include <iostream>

using namespace std;

int main()
{
    cout << "This program will calculate the minimum and maximum of give numbers";
    int inputNumbers[10]{23, 45, 7, 68, 90, 56, 34, 76, 89, 18};
    int minimum = 0, maximum = 0, tempVal = 0;
    //snippet to find the maximum
    for (int i = 0; i < 10; i++)
    {
        if (inputNumbers[i] > tempVal)
        {
            tempVal = inputNumbers[i];
        }
    }
    maximum = tempVal;

    //snippet to find the minimum
    //since tempval is currently the maximum, can use the same variable to compare for lower and lower values.
    for (int i = 0; i < 10; i++)
    {
        if (inputNumbers[i] < tempVal)
        {
            tempVal = inputNumbers[i];
        }
    }
    minimum = tempVal;

    cout << "The maximum value is " << maximum << endl;
    cout << "The minimum value is " << minimum << endl;
    return 0;
}
