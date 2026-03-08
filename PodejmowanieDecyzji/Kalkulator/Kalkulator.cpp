#include <iostream>

int main()
{
	int liczba1, liczba2;
	char operacja;

    std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> liczba1;

	if (std::cin.fail()) {
		std::cout << "Niepoprawna liczba!";
		return 1;
	}

	std::cout << "Podaj druga liczbe: ";
	std::cin >> liczba2;

	if (std::cin.fail()) {
		std::cout << "Niepoprawna liczba!";
		return 1;
	}

	std::cout << "Podaj operacje (+, -, *, /): ";
	std::cin >> operacja;

	if (std::cin.fail()) {
		std::cout << "Niepoprawna operacja!";
		return 1;
	}

	float wynik;

	switch (operacja) {
	case '+':
		wynik = liczba1 + liczba2;
		break;
	case '-':
		wynik = liczba1 - liczba2;
		break;
	case '*':
		wynik = liczba1 * liczba2;
		break;
	case '/':
		if (liczba2 != 0) {
			wynik = static_cast<float>(liczba1) / liczba2;
		}
		else {
			std::cout << "Nie mozna dzielic przez zero!";
			return 1;
		}
		break;
	default:
		std::cout << "Nieznana operacja!";
		return 1;
	}

	std::cout << "Wynik: " << wynik;
}