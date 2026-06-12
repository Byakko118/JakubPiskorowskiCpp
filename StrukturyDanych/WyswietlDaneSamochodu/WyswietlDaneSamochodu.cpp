#include <iostream>
#include <string>

struct Samochod {
	std::string marka;
	std::string model;
	int rok_produkcji;
};

void WyswietlDane(const Samochod& samochod)
{
	std::cout << "Dane samochodu:" << std::endl;
	std::cout << "Marka: " << samochod.marka << std::endl;
	std::cout << "Model: " << samochod.model << std::endl;
	std::cout << "Rok produkcji: " << samochod.rok_produkcji << std::endl;
}

int main()
{
	Samochod samochod = { "Toyota", "Corolla", 2018 };

	WyswietlDane(samochod);

	return 0;
}
