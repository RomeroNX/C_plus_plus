#include <iostream>
#include <cmath>
#define M_PI 3.141592653589793288456

int main()
{
	int a = 3;
	double b = 0.151;
	double result;

	result = (1 - std::pow(std::cos((b / a) * M_PI), 2)) / (0.5 * std::exp(b) + 0.312 * std::exp(a));

	std::cout << result;

}
