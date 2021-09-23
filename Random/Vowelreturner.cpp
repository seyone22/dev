//Author: S.G.Seyone (2019/ICT/46)

//This program will accept user input to create an array of given size, and then largest, smallest, and total of it.

#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

bool isVowel(char test)
{
    char vowels[10]{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool vowelCondition = false;
    for (int i = 0; i < 10; i++)
    {
        if (test == vowels[i])
        {
            vowelCondition = true;
        }
    }
    return vowelCondition;
}

int main()
{
    char character, chara;
    cin >> chara;
    if (isVowel(chara) == true)
    {
        cout << "The character is a vowel!\n";
    }
    else
    {
        cout << "The character is not a vowel!\n";
    }
    return 0;
}
