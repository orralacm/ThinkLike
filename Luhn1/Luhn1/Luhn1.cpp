#include <iostream>
using std::cout;
using std::cin;

int doubledigitvalue(int digit)
{
	int doubledDigit = digit * 2;
	int sum;
	if (doubledDigit >= 10)
	{
		sum = 1 + doubledDigit % 10;
	}
	else
	{
		sum = doubledDigit;
	}
	return sum;
}

int main()
{
	int main_digit;
	int main_sum;
	cout << "Enter a single digit number, 0-9: ";
	cin >> main_digit;
	main_sum = doubledigitvalue(main_digit);
	cout << "Sum of digits in doubled number: " << main_sum << "\n";
}

