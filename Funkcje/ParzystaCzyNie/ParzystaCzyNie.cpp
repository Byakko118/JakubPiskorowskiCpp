#include <iostream>

bool czyParzysta(int liczba)
{
	return (liczba % 2 == 0);
}

int main()
{
    int liczba;

    std::cout << "Podaj liczbe calkowita: ";
	std::cin >> liczba;

	if (czyParzysta(liczba)) {
		std::cout << "Liczba " << liczba << " jest parzysta." << std::endl;
	}
	else {
		std::cout << "Liczba " << liczba << " jest nieparzysta." << std::endl;
	}

	return 0;
}