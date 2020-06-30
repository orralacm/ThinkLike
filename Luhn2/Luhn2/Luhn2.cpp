
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    char digit;
    cout << "Enter a one-digit number: ";
    //digit = cin.get();
    cin >> digit;
    int sum = digit - '0';
    cout << "Is the sum of digits " << sum << "? \n";
}
