#include <iostream>

using namespace std;

void tableReader(int dataTable[])
{
    int tempMax = 0, ColMax = 0, Sum = 0;
    string max;
    cout << "SALES BY COLOR\n";
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            Sum += dataTable[i][j];
            if (dataTable[i][j] >= tempMax)
            {
                tempMax = dataTable[i][j];
            }
        }
        cout << "The total amount of " << dataTable[j] << " cars sold is " << Sum << endl;
        Sum = 0;
        for (int i = 0; i < 6; i++)
        {
            if (tempMax == dataTable[i][j])
            {
                max = TableRows[i];
                cout << "\tThe Most " << TableColumns[j] << " cars sold is " << tempMax << ", and the brand is " << max << endl;
                tempMax = 0;
            }
        }
    }
}

int main()
{
    int VehicleSales[6][5]{
        //Where Columns are Red, Brown Black, White, and Grey
        {10, 7, 12, 10, 4},   //Honda
        {18, 11, 15, 17, 10}, //Ford
        {12, 10, 9, 5, 13},   //GM
        {16, 6, 13, 8, 3},    //Toyota
        {10, 7, 12, 6, 4},    //Nissan
        {9, 4, 7, 12, 11}     //BMW
    };

    string TableColumns[5]{"Red", "Brown", "Black", "White", "Grey"};
    string TableRows[6]{"Honda", "Ford", "GM", "Toyota", "Nissan", "BMW"};

    //Calculates the maximum sales per color (column)
    int tempColMax = 0, ColMax = 0, colorSum = 0;
    string maxBrand;
    cout << "SALES BY COLOR\n";
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            colorSum += VehicleSales[i][j];
            if (VehicleSales[i][j] >= tempColMax)
            {
                tempColMax = VehicleSales[i][j];
            }
        }
        cout << "The total amount of " << TableColumns[j] << " cars sold is " << colorSum << endl;
        colorSum = 0;
        for (int i = 0; i < 6; i++)
        {
            if (tempColMax == VehicleSales[i][j])
            {
                maxBrand = TableRows[i];
                cout << "\tThe Most " << TableColumns[j] << " cars sold is " << tempColMax << ", and the brand is " << maxBrand << endl;
                tempColMax = 0;
            }
        }
    }

    //Calcualtes the maximum sales per vehicle type (row)
    int tempRowMax = 0, RowMax = 0, brandSum = 0;
    string maxColor;
    cout << "SALES BY BRAND\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            brandSum += VehicleSales[i][j];
            if (VehicleSales[i][j] >= tempRowMax)
            {
                tempRowMax = VehicleSales[i][j];
            }
        }
        cout << "The total amount of " << TableRows[i] << " sold is " << brandSum << endl;
        brandSum = 0;
        for (int j = 0; j < 5; j++)
        {
            if (tempRowMax == VehicleSales[i][j])
            {
                maxColor = TableColumns[j];
                cout << "\tThe Most " << TableRows[i] << "s sold is " << tempRowMax << ", and the color is " << maxColor << endl;
                tempRowMax = 0;
            }
        }
    }
    return 0;
}