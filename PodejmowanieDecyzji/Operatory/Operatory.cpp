#include <iostream>

int main()
{
	int a;
	int b;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> a;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> b;

	int suma = a + b;
	int roznica = a - b;
	int iloczyn = a * b;
	float iloraz = static_cast<float>(a) / b;
	int reszta = a % b;

	std::cout << "Suma: " << suma << std::endl;
	std::cout << "Roznica: " << roznica << std::endl;
	std::cout << "Iloczyn: " << iloczyn << std::endl;
	std::cout << "Iloraz: " << iloraz << std::endl;
	std::cout << "Reszta z dzielenia: " << reszta << std::endl;

	return 0;
}