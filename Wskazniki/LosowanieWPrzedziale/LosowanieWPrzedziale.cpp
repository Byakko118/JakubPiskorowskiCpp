#include <iostream>
#include <cstdlib>
#include <ctime>

void LosujTablice(int* tablica, int rozmiar, int poczatek, int koniec)
{
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = poczatek + rand() % (koniec - poczatek + 1);
	}
}

bool SprawdzLiczbe(int* liczba, int* tablica, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++) {
		if (tablica[i] == *liczba) {
			return true;
		}
	}
	return false;
}

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	int rozmiar;
	int poczatek;
	int koniec;

	std::cout << "Podaj ile liczb wylosowac: ";
	std::cin >> rozmiar;

	std::cout << "Wartosc poczatkowa: ";
	std::cin >> poczatek;

	std::cout << "Wartosc koncowa: ";
	std::cin >> koniec;

	if (std::cin.fail() || rozmiar <= 0 || poczatek > koniec) {
		std::cout << "Niepoprawne dane." << std::endl;
		return 1;
	}

	int* tablica = new int[rozmiar];
	LosujTablice(tablica, rozmiar, poczatek, koniec);

	std::cout << "Tablica: ";
	for (int i = 0; i < rozmiar; i++) {
		std::cout << tablica[i];
		if (i < rozmiar - 1) {
			std::cout << ", ";
		}
	}
	std::cout << std::endl;

	int liczba;
	int liczbaProb = 0;

	while (true) {
		std::cout << std::endl << "Podaj liczbe: ";
		std::cin >> liczba;

		if (std::cin.fail()) {
			std::cout << "Niepoprawne dane. Sprobuj ponownie." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		liczbaProb++;

		if (SprawdzLiczbe(&liczba, tablica, rozmiar)) {
			std::cout << "Zgadles!" << std::endl;
			break;
		}
		else {
			std::cout << "Nie zgadles" << std::endl;
		}
	}

	std::cout << "Zgadles za " << liczbaProb << " razem." << std::endl;

	delete[] tablica;

	return 0;
}
