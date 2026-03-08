#include <iostream>

int main()
{
	int kg;
	float m = 0.0;

	std::cout << "Podaj wage (kg): ";
	std::cin >> kg;

	if (std::cin.fail() || kg <= 0)
	{
		std::cout << "Nieprawidlowa wartosc. Waga musi byc liczba calkowita dodatnia." << std::endl;
		return 1;
	}

	std::cout << "Podaj wzrost (m): ";
	std::cin >> m;

	if (std::cin.fail() || m <= 0)
	{
		std::cout << "Nieprawidlowa wartosc. Wzrost musi byc liczba dodatnia." << std::endl;
		return 1;
	}

	float bmi = kg / (m * m);

	std::cout << "Twoje BMI: " << bmi << std::endl;

	if (bmi < 18.5)
		std::cout << "Niedowaga" << std::endl;
	else if (bmi >= 18.5 && bmi <= 24.9)
		std::cout << "W normie" << std::endl;
	else if (bmi >= 25 && bmi <= 29.9)
		std::cout << "Nadwaga" << std::endl;
	else
		std::cout << "Otylosc" << std::endl;

	return 0;
}