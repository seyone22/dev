#include <iostream>

using namespace std;
int fib(int n) //3
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        // return ( fib(3) + fib(2))
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
start:
    int x;
    cout << "Enter a number : ";
    cin >> x;
    cout << "Fibonnacci of " << x << " : " << fib(x) << endl; //4
    cout << endl;
    goto start;
    return 0;
}

//0 1 1 2 3 5 8 13...

//5