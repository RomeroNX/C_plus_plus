#include <iostream>
#include <cmath>

int main()
{
	system("chcp 65001");
	double a, b, h;

	std::cout << "Введіть a,b,h: ";
	std::cin >> a >> b >> h;

	std::cout << "-------------------" << std::endl;
	std::cout << ":    X   :    Y    :" << std::endl;
	std::cout << "-------------------" << std::endl;

	for (double x = a; x <= b; x += h)
	{
		if (x != -5)
		{
			double y = 8 + (sqrt(x - 7) / (x + 5));
			std::cout << ": " << x << " : " << y << " :" << std::endl;
		}
		else
		{
			std::cout << ": " << x << " : ОДЗ :" << std::endl;
		}
	}

	std::cout << "-------------------" << std::endl;

	return 0;
}
