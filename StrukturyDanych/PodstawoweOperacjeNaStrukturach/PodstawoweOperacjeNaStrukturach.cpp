#include <iostream>
#include <string>

struct Osoba {
	std::string imie;
	std::string nazwisko;
	int wiek;
};

int main()
{
	Osoba osoba;
	osoba.imie = "Jan";
	osoba.nazwisko = "Kowalski";
	osoba.wiek = 25;

	std::cout << "Dane przed modyfikacja:" << std::endl;
	std::cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << std::endl;

	osoba.wiek = 30;

	std::cout << std::endl << "Dane po modyfikacji:" << std::endl;
	std::cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << std::endl;

	return 0;
}
