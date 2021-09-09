//Author: S.G.Seyone (2019/ICT/46)

//This program will accept user input to create an array of given size, and then largest, smallest, and total of it.

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
    int rows = 0, columns = 0, runningTot = 0, runningMax = 0, runningMin = 0;
    int tempMin[2], tempMax[2];

    cout << "Please enter the number of rows for the table.\n";
    rows = sanitizedInputs();
    cout << "Please enter the number of columns for the table.\n";
    columns = sanitizedInputs();

    cout << "A grid of " << rows << " rows and " << columns << " columns will be made." << endl;

    int tableData[rows][columns]; //creates the array

    int columnTotal[columns], rowTotal[rows];                               //declare arrays for row and column totals
    int columnMax[columns], rowMax[rows], columnMin[columns], rowMin[rows]; //declare arrays to store individual maximums and minimums

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++) //for the ith row, cycle through available columns
        {
            cout << "Please enter value for row " << i << ", column " << j << endl;
            tableData[i][j] = sanitizedInputs();
        }
    }

    //code snippet calculations
    //THIS BLOCK IS FOR ROWS
    for (int i = 0; i < rows; i++)
    {
        rowTotal[i] = 0;
        rowMax[i] = 0;
        rowMin[i] = 0;

        //Calculates the Row Totals
        for (int j = 0; j < columns; j++) //for the ith row, cycle through available columns
        {
            rowTotal[i] = rowTotal[i] + tableData[i][j];
        }
        //Calculates the row Maximums and Minimums
        tempMin[0] = rowTotal[i], tempMin[1] = rowTotal[i];
        tempMax[0] = 0, tempMax[1] = 0;

        for (int j = 0; j < columns; j++)
        {
            if (tableData[i][j] > tempMax[1])
            {
                rowMax[i] = tableData[i][j];
                tempMax[1] = tableData[i][j];
            }
            if (tableData[i][j] < tempMin[1])
            {
                rowMin[i] = tableData[i][j];
                tempMin[1] = tableData[i][j];
            }
        }
    }

    //THIS BLOCK IS FOR COLUMNS
    for (int j = 0; j < columns; j++)
    {
        columnTotal[j] = 0;
        columnMax[j] = 0;
        columnMin[j] = 0;

        //Calculates the Column Totals
        for (int i = 0; i < rows; i++) //for the ith column, cycle through available rows
        {
            columnTotal[j] = columnTotal[j] + tableData[i][j];
        }
        //Calculates the Column Maximums and Minimums
        tempMin[0] = columnTotal[j], tempMin[1] = columnTotal[j];
        tempMax[0] = 0, tempMax[1] = 0;

        for (int i = 0; i < rows; i++)
        {
            if (tableData[i][j] > tempMax[0])
            {
                columnMax[j] = tableData[i][j];
                tempMax[0] = tableData[i][j];
            }
            if (tableData[i][j] < tempMin[0])
            {
                columnMin[j] = tableData[i][j];
                tempMin[0] = tableData[i][j];
            }
        }
    }
    //Calculates the overall Total, Maximums, and Minimums using ROW DATA
    for (int i = 0; i < rows; i++)
    {
        runningTot = runningTot + rowTotal[i];

        if (rowMax[i] > runningMax)
        {
            runningMax = rowMax[i];
        }
    }
    runningMin = runningMax; //sets runningMin as the largest possible value so that we can step backwards.
    for (int i = 0; i < rows; i++)
    {
        if (rowMin[i] < runningMin)
        {
            runningMin = rowMin[i];
        }
    }

    //output block
    cout << "Outputs are" << endl
         << "current max " << runningMax << endl
         << "current min " << runningMin << endl
         << "total of array " << runningTot << endl;

    arrayOutput("Row Totals are", rows, rowTotal);
    arrayOutput("Column Totals are", columns, columnTotal);
    arrayOutput("Column Maxes are", columns, columnMax);
    arrayOutput("Row Maxes are", rows, rowMax);
    arrayOutput("Column Mins are", columns, columnMin);
    arrayOutput("Row Mins are", rows, rowMin);
    system("pause");
    return 0;
}
