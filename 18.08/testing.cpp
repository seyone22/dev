#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5)
            break;
    }
    cout << "end of loop\n";
    return 0;
}