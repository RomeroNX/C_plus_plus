#include <iostream>

int main()
{
	system("chcp 65001");

	int n;
	int count = 0;

	std::cout << "Введіть натуральне число: ";
	std::cin >> n;

	if (n <= 0)
	{
		std::cout << "Введене число не натуральне" << std::endl;
	}
	else
	{
		while (n > 0)
		{
			int digit = n % 10;

			if (digit > 3)
			{
				count++;
			}

			n /= 10;
		}

		std::cout << "Кількість цифр більших за 3: " << count << std::endl;
	}

	return 0;
}
