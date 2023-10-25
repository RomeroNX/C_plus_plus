#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, d, e;

	std::cin >> a >> b >> c >> d >> e;

	printf("%.1f\n", a);
	printf("%.2f\n", b);
	printf("%.3f\n", c);
	printf("%.4f\n", d);
	printf("%.0f\n", e);
}
