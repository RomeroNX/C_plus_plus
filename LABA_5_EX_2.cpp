#include <iostream>
#include <cmath>

int main()
{
	system("chcp 65001");

	double sum = 0;

	for (int i = 10; i <= 20; i++)
	{
		double root = sqrt(i);
		sum += root;
	}

	std::cout << "Сума коренів від 10 до 20: " << sum << std::endl;

	return 0;
}
