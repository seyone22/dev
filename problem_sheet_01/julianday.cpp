#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    do
    {
        int n = 0, JDN = 0, date = 0, year = 0, month = 0, day = 0;

        cin >> year >> month >> day;

        JDN = (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075;

        cout << JDN << endl;
    } while (true);
    return 0;
}