#include <iostream>
#include <string>

using namespace std;

int a;

void findArithmeticCal(double num1, double num2, double &sum, double &difference, double &product, double &divide) 
{
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    divide = num1 / num2;
}


int main()
{
    int number1 = 40, number2 = 29;
    double addition, subtraction, multiplication, division;
    findArithmeticCal(number1, number2, addition, subtraction, multiplication, division);
    cout << addition << endl
         << subtraction << endl
         << multiplication << endl
         << division << endl;
}