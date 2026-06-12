#include <iostream>
#include <string>

struct Osoba {
	std::string imie;
	std::string nazwisko;
	int wiek;
};

int main()
{
	const int WIELKOSC = 3;
	Osoba osoby[WIELKOSC];

	osoby[0] = { "Jan", "Kowalski", 25 };
	osoby[1] = { "Anna", "Nowak", 30 };
	osoby[2] = { "Piotr", "Wisniewski", 40 };

	std::cout << "Dane zapisane w tablicy struktur:" << std::endl;
	for (int i = 0; i < WIELKOSC; i++) {
		std::cout << i + 1 << ". Imie: " << osoby[i].imie
			<< ", Nazwisko: " << osoby[i].nazwisko
			<< ", Wiek: " << osoby[i].wiek << std::endl;
	}

	return 0;
}
