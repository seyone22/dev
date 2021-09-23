#include <iostream>
#include <cmath>

using namespace std;

//naming convention for functions is all simple
double FactorialFinder(int number)
{
    double factorial = 1;
    if (number == 1 | number == 0)
    {
        factorial = 1;
    }
    else
    {
        if (number > 0)
        {
            {
                for (int i = 1; i <= number; i++)
                {
                    factorial = factorial * i;
                }
            }
        }
        else
        {
            cout << "error";
        }
    }
    return factorial;
}

int nPr(int n, int r)
{
    return FactorialFinder(n) / (FactorialFinder((n - r)));
}

int nCr(int n, int r)
{
    return FactorialFinder(n) / (FactorialFinder(r) * (FactorialFinder((n - r))));
}

int main()
{
    do
    {
        int n, r;
        cin >> n >> r;
        cout << "Permutation";
        cout << nPr(n, r) << endl;

        cout << "Combination";
        cout << nCr(n,r) << endl;

    } while (true);
    return 0;
}
