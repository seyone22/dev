#include <iostream>

using namespace std;

int main()
{
    int pell[25];

    pell[0] = 0, pell[1] = 1;

    for (int i = 2; i <= 25; i++)
    {
        pell[i] = 2 * pell[i - 1] + pell[i - 2];
    }
    for (int i = 0; i < 25; i++)
    {
        cout << pell[i] << endl;
    }
    return 0;
}