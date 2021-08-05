#include <iostream>

using namespace std;

int main()
{
    int count = 0, i = 0;
    do
    {
            count = count + i++;
            cout << count << endl;
    }while(i < 50);
    cout << count;
    system("pause");
    return 0;
}