#include <iostream>

int main()
{
    int liczba;
    std::cout << "Wpisz liczbe calkowita: ";
	std::cin >> liczba;
	std::cout << "\n";

    if (std::cin.fail()) {
		std::cout << "Niepoprawna liczba!";
	}
	else {
		if (liczba % 2 == 0) {
			std::cout << "Liczba " << liczba << " jest parzysta.\n";
		}
		else {
			std::cout << "Liczba " << liczba << " jest nieparzysta.\n";
		}
		if (liczba % 3 == 0) {
			std::cout << "Liczba " << liczba << " jest podzielna przez 3.\n";
		}
		else {
			std::cout << "Liczba " << liczba << " nie jest podzielna przez 3.\n";
		}
	}

	return 0;
}