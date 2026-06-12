#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream plik("dane.txt");

	if (!plik) {
		std::cout << "Blad otwarcia pliku!" << std::endl;
		return 1;
	}

	std::string imie;
	std::string nazwisko;
	int wiek;

	while (plik >> imie >> nazwisko >> wiek) {
		std::cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << std::endl;
	}

	plik.close();

	return 0;
}
