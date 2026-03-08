#include <iostream>

int main()
{
	int age;
	std::string imie;

    std::cout << "Podaj swoj wiek: ";
	std::cin >> age;
	std::cout << "Podaj swoje imie: ";
	std::cin >> imie;
	std::cout << "Witaj " << imie << "! Masz " << age << " lat.";

	return 0;
}