#include <iostream>

int main()
{
	int temperaturaCelsjusz;
	char jednostka;

	std::cout << "Podaj temperature w stopniach Celsjusza: ";
	std::cin >> temperaturaCelsjusz;

	if (std::cin.fail()) {
		std::cout << "Niepoprawna temperatura!";
		return 1;
	}

	std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Farenheit): ";
	std::cin >> jednostka;
	jednostka = toupper(jednostka);

	if (std::cin.fail()) {
		std::cout << "Niepoprawna jednostka!";
		return 1;
	}

	float wynik;

	switch (jednostka) {
	case 'K':
		wynik = temperaturaCelsjusz + 273.15f;
		std::cout << "Temperatura w Kelvinach: " << wynik;
		break;
	case 'F':
		wynik = (temperaturaCelsjusz * 9.0f / 5.0f) + 32.0f;
		std::cout << "Temperatura w Farenheitach: " << wynik;
		break;
	default:
		std::cout << "Nieznana jednostka!";
		return 1;
	}

	return 0;
}