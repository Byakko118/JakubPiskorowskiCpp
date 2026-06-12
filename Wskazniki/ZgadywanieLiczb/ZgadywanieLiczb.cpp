#include <iostream>
#include <cstdlib>
#include <ctime>

void LosujTablice(int* tablica, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = rand() % 51;
	}
}

bool SprawdzLiczbe(int* liczba, int* tablica, int rozmiar) {
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

	const int rozmiar = 10;
	int tablica[rozmiar];
	int liczba;
	int liczbaProb = 0;

	LosujTablice(tablica, 10);

	std::cout << "Tablica: ";
	for (int i = 0; i < rozmiar; i++) {
		std::cout << tablica[i] << ", ";
	}
	std::cout << std::endl;

	while (true) {
		std::cout << "Podaj liczbe: ";
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

	return 0;
}