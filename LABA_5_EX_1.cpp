#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	system("chcp 65001");

	int x, i, y;
	for (i = 0; i < 5; i++)
	{
		cout << "Введіть змінну х: ";
		cin >> x;
		y = pow(sin(x), 5) + abs(5 * x - 1.5);
		cout << "y = " << y << "\n";
	}
}