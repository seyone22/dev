//Author: S.G.Seyone (2019/ICT/46)

//This program will add two matrices.

#include <iostream>
#include <array>

using namespace std;

int main()
{

    //Generates the first Matrix
    int FirstMatrix[3][3]{
        {10, 22, 38},
        {45, 32, 56},
        {67, 12, 33}};

    //Generates the second Matrix
    int SecondMatrix[3][3]{
        {23, 45, 60},
        {38, 62, 40},
        {17, 24, 44}};

    //Initialize an empty matrix for output
    int OutputMatrix[3][3]{
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};

    //Code to sum up the two matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            OutputMatrix[i][j] = FirstMatrix[i][j] + SecondMatrix[i][j];
        }
    }

    cout << "The first Matrix is:\n";
    //Code to output the matrix
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << FirstMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The second Matrix is:\n";
    //Code to output the matrix
        for (int i = 0; i < 3; i++)
    {
        cout << "\t";
        for (int j = 0; j < 3; j++)
        {
            cout << SecondMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Resultant Matrix is:\n";
    //Code to output the matrix
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << OutputMatrix[i][j] << " ";
        }
        cout << endl;
    }
}