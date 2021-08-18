//This program will find the count or sum of odd or even numbers, depending on user selection, of all the even numbers, 1 to 20 inclusive.
#include <iostream>

using namespace std;

int main()
{
    int start = 0, end = 0, mod = 0, evenSum = 0, oddSum = 0, oddCount = 0, evenCount = 0;
    cout << "Please enter a starting and ending number, separated by a space\n";
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        mod = i % 2;
        if (mod == 0)
        {
            evenSum = evenSum + i;
            evenCount = evenCount + 1;
        } else
        {
            oddSum = oddSum + i;
            oddCount = oddCount + 1;
        }
    }
    cout << "The number of even number is " << evenCount << endl
         << "The sum of even numbers is " << evenSum << endl
         << "The count of odd numbers is " << oddCount << endl
         << "The sum of odd numbers is " << oddSum << endl;
    system("pause");
    return 0;
}