#include <iostream>
using namespace std;
int main(){
    int num1=0, num2=0, num3=0;
    cin >> num1;
    cin >> num2;
    num3 = num1 % num2; //this doesn't work, only displays the fisrt number entered?
    cout << num3;
    system("pause");
}