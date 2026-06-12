#include <iostream>
#include <fstream>
#include <string>

struct Osoba {
	std::string imie;
	std::string nazwisko;
	int wiek;
};

bool PlikIstnieje(const std::string& nazwa)
{
	std::ifstream plik(nazwa);
	return plik.good();
}

void UtworzPrzykladowyPlik(const std::string& nazwa)
{
	std::ofstream plik(nazwa);
	plik << "Jan Kowalski 25" << std::endl;
	plik << "Anna Nowak 30" << std::endl;
	plik.close();
}

void WyswietlZawartoscPliku(const std::string& nazwa)
{
	std::ifstream plik(nazwa);
	std::string imie;
	std::string nazwisko;
	int wiek;

	while (plik >> imie >> nazwisko >> wiek) {
		std::cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << std::endl;
	}

	plik.close();
}

int main()
{
	const std::string nazwaPliku = "dane.txt";

	if (!PlikIstnieje(nazwaPliku)) {
		std::cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykladowych danych..." << std::endl;
		UtworzPrzykladowyPlik(nazwaPliku);
	}

	char odpowiedz;
	std::cout << "Czy chcesz dodac nowa osobe? (t/n): ";
	std::cin >> odpowiedz;

	if (odpowiedz == 't' || odpowiedz == 'T') {
		Osoba osoba;

		std::cout << "Podaj imie: ";
		std::cin >> osoba.imie;
		std::cout << "Podaj nazwisko: ";
		std::cin >> osoba.nazwisko;
		std::cout << "Podaj wiek: ";
		std::cin >> osoba.wiek;

		if (std::cin.fail()) {
			std::cout << "Niepoprawne dane." << std::endl;
			return 1;
		}

		std::ofstream plik(nazwaPliku, std::ios::app);
		plik << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << std::endl;
		plik.close();
	}

	std::cout << std::endl << "Dane w pliku po dopisaniu:" << std::endl;
	WyswietlZawartoscPliku(nazwaPliku);

	return 0;
}
