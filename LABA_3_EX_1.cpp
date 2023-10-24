#include <iostream>
#include <cstdlib>

int main()
{
	std::system("chcp 1251");

	int N;
	std::cout << "Enter a three-digit positive number: ";
	std::cin >> N;

	if (N >= 100 && N <= 999)
	{
		int digit1 = N / 100;
		int digit2 = (N / 10) % 10;
		int digit3 = N % 10;

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

	return 0;
}
