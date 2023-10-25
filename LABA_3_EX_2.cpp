#include <iostream>
using namespace std;

int main()
{
	system("chcp 65001");

	int dayNum;

	std::cout << "Введіть номер дня: ";
	std::cin >> dayNum;

	std::string dayNameENG;
	std::string dayNameUA;

	switch (dayNum)
	{
	case 1:
		dayNameENG = "Monday";
		dayNameUA = "Понеділок";
		break;
	case 2:
		dayNameENG = "Tuesday";
		dayNameUA = "Вівторок";
		break;
	case 3:
		dayNameENG = "Wednesday";
		dayNameUA = "Середа";
		break;
	case 4:
		dayNameENG = "Thursday";
		dayNameUA = "Четвер";
		break;
	case 5:
		dayNameENG = "Friday";
		dayNameUA = "П'ятниця";
		break;
	case 6:
		dayNameENG = "Saturday";
		dayNameUA = "Субота";
		break;
	case 7:
		dayNameENG = "Sunday";
		dayNameUA = "Неділя";
		break;
	default:
		dayNameENG = "Invalid week number";
		dayNameUA = "Некоректний номер тижня";
		break;
	}

	std::cout << "Назва (Eng): " << dayNameENG << std::endl;
	std::cout << "Назва (UK): " << dayNameUA << std::endl;

}
