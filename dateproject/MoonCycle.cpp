//This program will find all the full moon dates up to any given date.
//11/12/2000 will be used as my hardcoded full moon date.
//To 1st 2011, that's 20 days. All calculations will be (20 + n*365 + x + k), where x is the days into the year, and n is the year count (n=2000-YEAR).
//Leap years have to be considered. 2000 is a leap year, so 1 will have to be added every 4 years past. (n mod 4 = k)
//The synodic period will be taken as 29.5306. The resulting date will be rounded down.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    do
    {
        int n = 0, daysInYear = 0, leap = 0, date = 0, year = 0, month = 0, day = 0, intervalToJan = 0, totalInterval = 0;

        cin >> year >> month >> day;

        n = year - 2000;
        leap = n / 4;
        if (year != 2000)
        {
            int monthCount[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            for (int i = 0; i < (month - 1); i++)
            {
                daysInYear = daysInYear + monthCount[i];
            } //will stop the calculation at the end of the previous month
        }
        else if (year == 2000)
        {
            day = 0;
            n = 1;
        }

        intervalToJan = 20 + ((n - 1) * 365) + leap;
        daysInYear = daysInYear + day; //adds the days of the current month

        totalInterval = intervalToJan + daysInYear;

        double q;
        q = fmod(totalInterval, 29.53059);
        if (q == 29)
            cout << "Is a full moon day.";
        else
            cout << "Is not a full moon day";

        cout << endl << totalInterval << "space" << q << endl;
    } while (true);
    return 0;
}