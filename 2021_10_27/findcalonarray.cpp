//Author: S.G.Seyone
//Calls an array

#include <iostream>
using namespace std;

void findCalOnArray(int arr[], int sizeofarr, int &sum, double &average, int &min, int &max)
{
    int runningTot = 0;
    int runningMin = 0, runningMax = 0;

    runningMax = arr[0];
    runningMin = arr[0];

    for (int i = 0; i < sizeofarr; i++)
    {
        runningTot += arr[i];

        if (arr[i] <= runningMin)
        {
            runningMin = arr[i];
        }

        if (arr[i] >= runningMin)
        {
            runningMax = arr[i];
        }
    }
    sum = runningTot;
    average = runningTot / sizeofarr;
    min = runningMin;
    max = runningMax;
}

int userinput(string description)
{
    int input;
    cout << description << endl
         << ">>";
    cin >> input;
    return input;
}

int main()
{
    int arraySize = userinput("How large do you want your array to be?");

    int summation, valueMin, valueMax;
    double average;

    int integerArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        integerArray[i] = userinput("Please enter a value");
    }

    findCalOnArray(integerArray, arraySize, summation, average, valueMin, valueMax);

    cout << summation << endl << average << endl << valueMin << endl << valueMax;

    return 0;
}