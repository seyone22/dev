//Author: S.G.Seyone (2019/ICT/46)

//This program will add two matrices.

#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

//returns user input as integer
int sanitizedInputs()
{
    string input;
    int output;
    getline(cin, input);
    output = stoi(input);
    output = stoi(input);
    return output;
}

//outputs values of a given 1d array
void arrayOutput(string description, int arrayLength, int array[])
{
    cout << description << endl;
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int FirstMatrixRows = 0, FirstMatrixColumns = 0;
    int SecondMatrixRows = 0, SecondMatrixColumns = 0;

    //Generates the first Matrix
    cout << "Please enter the number of rows for the first matrix.\n";
    FirstMatrixRows = sanitizedInputs();
    cout << "Please enter the number of columns for the second matrix.\n";
    FirstMatrixColumns = sanitizedInputs();
    int FirstMatrix[FirstMatrixRows][FirstMatrixColumns];

    //Generates the second Matrix
    cout << "Please enter the number of rows for the first matrix.\n";
    FirstMatrixRows = sanitizedInputs();
    cout << "Please enter the number of columns for the second matrix.\n";
    FirstMatrixColumns = sanitizedInputs();
    int FirstMatrix[SecondMatrixRows][SecondMatrixColumns];

    //Code to sum up the two matrices
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}