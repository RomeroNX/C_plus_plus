#include <iostream>

int main()
{
	int num1, num2, num3, num4;

	std::cout << "Enter the three numbers: ";
	std::cin >> num1 >> num1 >> num3 >> num4;

	if (num1 >= 1 && num1 <= 255 && num2 >= 1 && num2 <= 255 && num3 >= 1 && num3 <= 255 && num4 >= 1 && num4 <= 255)
	{
		std::cout << num1 << "." << num2 << "." << num3 << "." << num4 << std::endl;
	}
	else
	{
		std::cout << "Invalid input, Each number must be in this range (1-255)" << std::endl;
	}

}
