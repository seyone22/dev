#include <iostream>

using namespace std;

int main()
{
    int odd[25], lineWidth[6]{3, 8, 13, 18, 23, 25}, oddNum = -1, line = 0, tempcount = 0;

    for (int i = 0; i <= 25; i++)
    {
        oddNum = oddNum + 2;
        odd[i] = oddNum;
    }

    for (int i = 0; i <= 6; i++)
    {
        for (int count = tempcount; count < lineWidth[line]; count++)
        {
            cout << odd[count] << " ";
            tempcount++;
        }
        cout << endl;
        line++;
    }

    return 0;
}