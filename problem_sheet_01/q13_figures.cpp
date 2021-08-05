#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= 6; i++)
    {
        for (int count = 6; count > i; count--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= 6; i++)
    {
        for (int count = 6; count > i; count--)
        {
            cout << " ";
        }
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= 6; i++)
    {
        for (int count = 0; count < i; count++)
        {
            cout << " ";
        }
        for (int count = 6; count > i; count--)
        {
            cout << "*";
        }
        for (int count = 6; count > i; count--)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    for (int i = 0; i <= 6; i++)
    {
        for (int count = 6; count > i; count--)
        {
            cout << " ";
        }
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        for (int count = 0; count < i; count++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= 6; i++)
    {
        for (int count = 0; count < i; count++)
        {
            cout << " ";
        }
        for (int count = 6; count > i; count--)
        {
            cout << "*";
        }
        for (int count = 6; count > i; count--)
        {
            cout << "*";
        }

        cout << endl;
    }

    system("pause");
    return 0;
}