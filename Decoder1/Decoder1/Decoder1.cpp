
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    cout << "Enter a four-digit number: ";
    char digitChar1 = cin.get();
    char digitChar2 = cin.get();
    char digitChar3 = cin.get();
    char digitChar4 = cin.get();
    int digit1 = digitChar1 - '0';
    int digit2 = digitChar2 - '0';
    int digit3 = digitChar3 - '0';
    int digit4 = digitChar4 - '0';
    int overallNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    cout << "That number as an integer: " << overallNumber << "\n";
}

