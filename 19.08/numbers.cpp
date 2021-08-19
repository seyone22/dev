#include <iostream>

using namespace std;

int main()
{
    int num[10], temp;
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter an odd number\n";
        cin >> temp;
        if (temp % 2 == 1)
        {
            num[i] = temp;
        }else
        {
            cout << "Please enter a valid number.\n";
        }
        
    }
    for (int j = 0; j < 10; j++)
    {
        cout << num[j] << endl;
    }
    
    return 0;
}