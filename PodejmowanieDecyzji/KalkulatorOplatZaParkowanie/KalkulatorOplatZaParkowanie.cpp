#include <iostream>

int main()
{
    const int OSOBOWY = 5;
    const int MOTOCYKL = 3;
	const int AUTOBUS = 10;

    int liczbaGodzin;
	char rodzajPojazdu;
	
	std::cout << "Podaj liczbe godzin parkowania: ";
	std::cin >> liczbaGodzin;

	if (std::cin.fail()) {
		std::cout << "Niepoprawna liczba godzin!";
		return 1;
	}

	std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	std::cin >> rodzajPojazdu;
	rodzajPojazdu = toupper(rodzajPojazdu);

	if (std::cin.fail()) {
		std::cout << "Niepoprawny rodzaj pojazdu!";
		return 1;
	}

	switch (rodzajPojazdu)
	{
	case 'S':
		std::cout << "Oplata za parkowanie: " << liczbaGodzin * OSOBOWY << " zl";
		break;
	case 'M':
		std::cout << "Oplata za parkowanie: " << liczbaGodzin * MOTOCYKL << " zl";
		break;
	case 'A':
		std::cout << "Oplata za parkowanie: " << liczbaGodzin * AUTOBUS << " zl";
		break;
	default:
		std::cout << "Nieznany rodzaj pojazdu!";
		break;
	}
}