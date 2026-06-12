#include <iostream>

int ObliczSume(int* tablica, int rozmiar)
{
	int suma = 0;

	for (int i = 0; i < rozmiar; i++) {
		suma += tablica[i];
	}

	return suma;
}

int main()
{
	const int WIELKOSC = 4;
	int tablica[WIELKOSC] = { 5, 10, 15, 20 };

	int suma = ObliczSume(tablica, WIELKOSC);
	std::cout << "Suma elementow tablicy: " << suma << std::endl;

	for (int i = 0; i < WIELKOSC; i++) {
		std::cout << "Podaj nowa wartosc dla elementu " << i << ": ";
		std::cin >> tablica[i];

		if (std::cin.fail()) {
			std::cout << "Niepoprawna wartosc." << std::endl;
			return 1;
		}
	}

	std::cout << "Nowa tablica:" << std::endl;
	for (int i = 0; i < WIELKOSC; i++) {
		std::cout << tablica[i] << " ";
	}
	std::cout << std::endl;

	suma = ObliczSume(tablica, WIELKOSC);
	std::cout << "Nowa suma elementow tablicy: " << suma << std::endl;

	return 0;
}
