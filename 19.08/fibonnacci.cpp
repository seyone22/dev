#include <iostream>

using namespace std;

int main()
{
    int fibonacci[25], lineWidth[6]{3, 8, 13, 18, 23, 25}, counter = 1, line = 0, tempcount = 0;

    fibonacci[0] = 0, fibonacci[1] = 1;

    for (int i = 2; i <= 25; i++)
    {
        fibonacci[i] = 1;
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    for (int i = 0; i <= 6; i++)
    {
        for (int count = tempcount; count < lineWidth[line]; count++)
        {
            cout << fibonacci[count] << " ";
            tempcount++;
        }
        cout << endl;
        line++;
    }

    return 0;
}