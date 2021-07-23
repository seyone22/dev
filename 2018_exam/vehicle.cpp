#include <iostream>
#include <string>
using namespace std;
int main()
{
    int selection = 0;
    string opt1, opt2, opt3, exitMsg;
    opt1 = "The total number of vehicles in each parking lot";
    opt2 = "The total number of vehicles of each type";
    opt3 = "The total number of vehicles in all the parking lots and of all vehicle types";
    exitMsg = "\nPlease enter another number to make another selection, or 4 to close the application.\n";

    int van[3]{13, 10, 8};
    int car[3]{9, 18, 20};
    int cab[3]{10, 20, 15};
    int moBike[3]{32, 34, 40};

    cout << "This program will display the vehicle slots taken up within the multi-lot parking facility. Please make a selection by typing in the relevant number. \nPLEASE DON'T ENTER ANYTHING OTHER THAN POSITIVE WHOLE NUMBERS, THE PROGRAM BUGS.\n"
         << endl
         << "\t1.\t" << opt1 << endl
         << "\t2.\t" << opt2 << endl
         << "\t3.\t" << opt3 << endl
         << "\t4.\tExit" << endl;

    do
    {
        cin >> selection;
        if (selection == 1)
        {
            cout << "You've selected " << opt1 << endl;
            for (int increment = 0; increment < 3; ++increment)
            {
                cout << "\tThe total number of vehicles in lot " << increment + 1 << " is: " << van[increment] + car[increment] + cab[increment] + moBike[increment] << endl;
            }
            cout << exitMsg;
        }
        else if (selection == 2)
        {
            cout << "You've selected " << opt2 << endl;
            cout << "\tThe total number of Vans are: " << van[0] + van[1] + van[2] << endl;
            cout << "\tThe total number of Cars are: " << car[0] + car[1] + car[2] << endl;
            cout << "\tThe total number of Cabs are: " << cab[0] + cab[1] + cab[2] << endl;
            cout << "\tThe total number of Motor Bikes are: " << moBike[0] + moBike[1] + moBike[2] << endl;
            cout << exitMsg;
        }
        else if (selection == 3)
        {
            cout << "You've selected " << opt3 << endl;
            cout << "The grand total number of vehicles of all types is ";
            /*for (int increment = 0, count = 0; increment < 3, ++increment)
            {
                count = count + van[increment];
                count = count + car[increment];
                count = count + cab[increment];
                count = count + moBike[increment];
            }
            cout << count;*/
            //not sure how to use this count variable outside of it... or even if this code makes sense...
            cout << van[0] + van[1] + van[2] + car[0] + car[1] + car[2] + cab[0] + cab[1] + cab[2] + moBike[0] + moBike[1] + moBike[2] << endl; //there should be a more efficient way to do this... right?
            cout << exitMsg;
        }
        else if (selection == 4)
        {
            //exit;
            return EXIT_SUCCESS; //not sure why this is used... the internet said to use it so...
        }
        else
        {
            cout << "Your selection is invalid. Please select a valid number." << endl;
        }
    } while (true);
    cout << endl;
    //system("pause");
}
