#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

int main()
{
	int wybor;

	std::cout << "Wybierz operacje:" << std::endl;
	std::cout << "1 - Utworz nowy plik" << std::endl;
	std::cout << "2 - Usun plik" << std::endl;
	std::cout << "3 - Zmien nazwe pliku" << std::endl;
	std::cout << "Twoj wybor: ";
	std::cin >> wybor;

	if (std::cin.fail()) {
		std::cout << "Niepoprawne dane." << std::endl;
		return 1;
	}

	if (wybor == 1) {
		std::string nazwa;
		std::cout << std::endl << "Podaj nazwe nowego pliku: ";
		std::cin >> nazwa;

		std::ofstream plik(nazwa);
		if (!plik) {
			std::cout << "Blad podczas tworzenia pliku!" << std::endl;
			return 1;
		}

		plik.close();
		std::cout << std::endl << "Plik '" << nazwa << "' zostal utworzony." << std::endl;
	}
	else if (wybor == 2) {
		std::string nazwa;
		std::cout << std::endl << "Podaj nazwe pliku do usuniecia: ";
		std::cin >> nazwa;

		if (remove(nazwa.c_str()) == 0) {
			std::cout << std::endl << "Plik '" << nazwa << "' zostal usuniety." << std::endl;
		}
		else {
			std::cout << std::endl << "Blad podczas usuwania pliku!" << std::endl;
			return 1;
		}
	}
	else if (wybor == 3) {
		std::string staraNazwa;
		std::string nowaNazwa;

		std::cout << std::endl << "Podaj nazwe pliku do zmiany: ";
		std::cin >> staraNazwa;
		std::cout << "Podaj nowa nazwe pliku: ";
		std::cin >> nowaNazwa;

		if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {
			std::cout << std::endl << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << std::endl;
		}
		else {
			std::cout << std::endl << "Blad podczas zmiany nazwy pliku!" << std::endl;
			return 1;
		}
	}
	else {
		std::cout << "Niepoprawny wybor." << std::endl;
		return 1;
	}

	return 0;
}
