#include <iostream>
#include <cstdlib>

int main()
{

	int n;
	std::cout << "Enter a three-digit positive number: ";
	std::cin >> n;

	if (n >= 100 && n <= 999)
	{
		int digit1 = n / 100;
		int digit2 = (n / 10) % 10;
		int digit3 = n % 10;

		int sum = 0;

		if (digit1 < 7)
		{
			sum += digit1;
		}
		if (digit2 < 7)
		{
			sum += digit2;
		}
		if (digit3 < 7)
		{
			sum += digit3;
		}

		std::cout << "Sum of digits less than 7: " << sum << std::endl;
	}
	else
	{
		std::cout << "The entered number is not a three-digit positive number" << std::endl;
	}

}
