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
    for (int i = 0; i < rows; i++)
    {
        rowTotal[i] = 0, columnTotal[i] = 0;
        columnMax[i] = 0, rowMax[i] = 0;
        columnMin[i] = 0, rowMin[i] = 0;

        //Calculates the Column and Row Totals
        for (int j = 0; j < columns; j++) //for the ith row, cycle through available columns
        {
            rowTotal[i] = rowTotal[i] + tableData[i][j];
            columnTotal[i] = columnTotal[i] + tableData[j][i];
        }
        //Calculates the Column and row Maximums and Minimums
        tempMin[0] = rowTotal[i], tempMin[1] = rowTotal[i];
        tempMax[0] = 0, tempMax[1] = 0;

        for (int j = 0; j < columns; j++)
        {
            if (tableData[j][i] > tempMax[0])
            {
                columnMax[i] = tableData[j][i];
                tempMax[0] = tableData[j][i];
            }
            if (tableData[i][j] > tempMax[1])
            {
                rowMax[i] = tableData[i][j];
                tempMax[1] = tableData[i][j];
            }

            if (tableData[j][i] < tempMin[0])
            {
                columnMin[i] = tableData[j][i];
                tempMin[0] = tableData[j][i];
            }
            if (tableData[i][j] < tempMin[1])
            {
                rowMin[i] = tableData[i][j];
                tempMin[1] = tableData[i][j];
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

    cout << "Row Totals are" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << rowTotal[i] << endl;
    }

    cout << "Column Totals are" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << columnTotal[i] << endl;
    }

    cout << "Column Maxes are" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << columnMax[i] << endl;
    }
    cout << "Row Maxes are" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << rowMax[i] << endl;
    }
    cout << "Column Mins are" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << columnMin[i] << endl;
    }
    cout << "Row Mins are" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << rowMin[i] << endl;
    }

    return 0;
}
