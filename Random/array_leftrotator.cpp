//Author: S.G.Seyone (2019/ICT/46)

//This program will left rotate any given array.

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

//snippet to right rotate an array. Basically it shifts everything over by one to the left, and it overflows to the nth index.
    for (int j = 0; j < counter - 1; j++) //-1 because otherwise, it will overwrite the last index with numbers[5], which doesn't exist.
    //This is because the if statement executes at the beginning of the for loop, while in the right rotator it executes at the end (j == counter)
    {
        if (j == 0)
        {
            otherArray[counter - 1] = numbers[j];
        }
        otherArray[j] = numbers[j + 1];
    }

//snippet to output the array code
    cout << "output\n";
    for (int k = 0; k < counter; k++)
    {
        cout << otherArray[k] << endl;
    }
    return 0;
}
