#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{

	cout << "Ex 2" << endl;
	short x, y, a, b;
	cout << "Enter x, y, a, b" << endl;
	cin >> x >> y >> a >> b;

	if (y <= x + 1 && x <= 0 && x >= 0 && y >= 0 && y <= 1)
	{
		cout << "You entered" << endl;
	}
	else
	{
		cout << "You don't enter";
	}
}