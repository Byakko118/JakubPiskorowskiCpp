#include <iostream>

int main()
{

	int punkty;

	std::cout << "Podaj wynik egzaminu (liczba punktow): ";
	std::cin >> punkty;

	if (std::cin.fail())
	{
		std::cout << "Nalezy wpisac liczbe";
		return 0;
	}

	int zakres = (punkty >= 0 && punkty <= 49) ? 1 :
		(punkty >= 50 && punkty <= 69) ? 2 :
		(punkty >= 70 && punkty <= 84) ? 3 :
		(punkty >= 85 && punkty <= 99) ? 4 :
		(punkty == 100) ? 5 : 0;

	if (zakres == 1)
	{
		std::cout << "Ocena: Niedostateczna";
	}
	else if (zakres == 2)
	{
		std::cout << "Ocena: Dostateczna";
	}
	else if (zakres == 3)
	{
		std::cout << "Ocena: Dobra";
	}
	else if (zakres == 4)
	{
		std::cout << "Ocena: Bardzo dobra";
	}
	else if (zakres == 5)
	{
		std::cout << "Ocena: Celujaca";
	}
	else
	{
		std::cout << "Nieprawidlowy wynik. Nalezy wpisac liczbe miedzy 0 a 100";
	}

	return 0;
}