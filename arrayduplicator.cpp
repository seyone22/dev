//Author: S.G.Seyone (2019/ICT/46)

//write a program to copy all the elements of one array to another array (reverse order mod)

#include <iostream>

using namespace std;

int main()
{
    int input, counter, i = 0;
    cout << "How many numbers will you enter?\n";
    cin >> counter;
    int numbers[counter]{};

    do
    {
        cout << "Please enter a number\n";
        cin >> input;
        numbers[i] = input;
        i++;
    } while (i < counter);

    int otherArray[counter];

    /*for (int j = counter; j > 0; j--)
    {
        otherArray[counter - j] = numbers[j - 1];
    }*/

    //snippet to right rotate an array. Basically it shifts everything over by one to the right, and it overflows to the 0th index.

    for (int j = 0; j < counter; j++)
    {
        if (j + 1 == counter)
        {
            otherArray[0] = numbers[j];
            break;
        }
        otherArray[j + 1] = numbers[j];
    }

    cout << "output\n";
    for (int k = 0; k < counter; k++)
    {
        cout << otherArray[k] << endl;
    }
    return 0;
}
