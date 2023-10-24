#include <iostream>
using namespace std;

int main()
{
	int n;
	const int MAX_SIZE = 30; 

	cout << "Enter the side size of the square (1-" << MAX_SIZE << "): ";
	cin >> n;

	if (n < 2 || n > MAX_SIZE)
	{
		cout << "Sorry, the side size is out of the valid range." << endl;
		return 1; 
	}

	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;

	for (int i = 0; i < n - 2; i++)
	{
		cout << '|';
		for (int j = 0; j < n - 2; j++)
			cout << ' ';
		cout << '|' << endl;
	}

	if (n > 1)
	{
		cout << '+';
		for (int i = 0; i < n - 2; i++)
			cout << '-';
		cout << '+' << endl;
	}

	return 0;
}
