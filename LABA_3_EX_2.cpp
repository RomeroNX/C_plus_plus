#include <iostream>
using namespace std;

int main()
{
	system("chcp 65001");

	int weekNum;

	std::cout << "Введіть номер дня: ";
	std::cin >> weekNum;

	std::string weekNameENG;
	std::string weekNameUA;

	switch (weekNum)
	{
	case 1:
		weekNameENG = "Monday";
		weekNameUA = "Понеділок";
		break;
	case 2:
		weekNameENG = "Tuesday";
		weekNameUA = "Вівторок";
		break;
	case 3:
		weekNameENG = "Wednesday";
		weekNameUA = "Середа";
		break;
	case 4:
		weekNameENG = "Thursday";
		weekNameUA = "Четвер";
		break;
	case 5:
		weekNameENG = "Friday";
		weekNameUA = "П'ятниця";
		break;
	case 6:
		weekNameENG = "Saturday";
		weekNameUA = "Субота";
		break;
	case 7:
		weekNameENG = "Sunday";
		weekNameUA = "Неділя";
		break;
	default:
		weekNameENG = "Invalid week number";
		weekNameUA = "Некоректний номер тижня";
		break;
	}

	std::cout << "Назва (Eng): " << weekNameENG << std::endl;
	std::cout << "Назва (UK): " << weekNameUA << std::endl;

	return 0;
}
