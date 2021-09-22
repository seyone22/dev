//Author: S.G.Seyone (2019/ICT/46)
//This program stores and performs calculations on a table of data.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int selection = 0;
    string exitMsg;
    string opt[3]{"The total number of vehicles in each parking lot", "The total number of vehicles of each type", "The total number of vehicles in all the parking lots and of all vehicle types"};
    exitMsg = "\nPlease enter another number to make another selection, or 4 to close the application.\n"; //Finally realized the usefulness of home and end on keyboard. Glad my RK68 will have it!

    int fullTotal = 0;
    int vehicle[3][4]{

        {13, 9, 10, 32},  //Row 0, AKA lot 1
        {10, 18, 20, 34}, //Row 1, AKA lot 2
        {8, 20, 15, 40},  //Row 2, AKA lot 3
    };

    cout << "This program will display the vehicle slots taken up within the multi-lot parking facility. Please make a selection by typing in the relevant number. \nPLEASE DON'T ENTER ANYTHING OTHER THAN POSITIVE WHOLE NUMBERS, THE PROGRAM BUGS.\n"
         << endl
         << "\t1.\t" << opt[0] << endl
         << "\t2.\t" << opt[1] << endl
         << "\t3.\t" << opt[2] << endl
         << "\t4.\tExit" << endl;

    do
    {
        cin >> selection;
        if (selection == 1)
        {
            cout << "You've selected " << opt[0] << endl;
            for (int x = 0, countTotal = 0; x < 3; ++x)
            {
                countTotal = 0;
                for (int y = 0; y < 4; ++y)
                {
                    countTotal = countTotal + vehicle[x][y];
                }
                cout << "\tThe total number of vehicles in lot " << x + 1 << " is: " << countTotal << endl;
            }
            cout << exitMsg;
        }
        else if (selection == 2)
        {
            for (int vehicleType = 0, columnTotal = 0; vehicleType < 4; vehicleType++)
            {
                columnTotal = 0; //resets the column total at the beginning of every loop so that it doesn't give a cumulative value
                for (int increment = 0; increment < 3; increment++)
                {
                    columnTotal = columnTotal + vehicle[increment][vehicleType];
                }
                switch (vehicleType)
                {
                case 0:
                    cout << "\tThe total number of Vans"
                         << " is: " << columnTotal << endl;
                    break;
                case 1:

                    cout << "\tThe total number of Cars"
                         << " is: " << columnTotal << endl;
                    break;
                case 2:

                    cout << "\tThe total number of Cabs"
                         << " is: " << columnTotal << endl;
                    break;
                case 3:

                    cout << "\tThe total number of Motor Bikes"
                         << " is: " << columnTotal << endl;
                    break;
                }
            }
            cout << exitMsg;
        }
        else if (selection == 3)
        {
            cout << "You've selected " << opt[2] << endl;
            cout << "\tThe grand total number of vehicles of all types is ";
            for (int x = 0, rowTotal = 0; x < 3; ++x)
            {
                rowTotal = 0;
                for (int y = 0; y < 4; ++y)
                {
                    rowTotal = rowTotal + vehicle[x][y];
                }
                fullTotal = fullTotal + rowTotal;
            }
            cout << fullTotal << endl; //If I put the cout statement inside the for loop, it gives the cumulative values of rows 1, 1 and 2, 1 and 2 and 3. How can I carry over the fullTotal value outside?
            // fixed by not declaring fulltotal inside the for loop, and only declaring it at the top.
            cout << exitMsg;
        }
        else if (selection == 4)
        {
            //exit;
            return EXIT_SUCCESS;
        }
        else
        {
            cout << "Your selection is invalid. Please select a valid number." << endl;
        }
    } while (true);
}
