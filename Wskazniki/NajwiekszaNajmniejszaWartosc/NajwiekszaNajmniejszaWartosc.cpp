#include <iostream>

void FindMinMax(float* tablica, int rozmiar, float* max, float* min)
{
	*max = tablica[0];
	*min = tablica[0];

	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] > *max) {
			*max = tablica[i];
		}
		if (tablica[i] < *min) {
			*min = tablica[i];
		}
	}
}

int main()
{
	const int WIELKOSC = 10;
	float tablica[WIELKOSC] = { 1.5f, -3.2f, 4.8f, 7.0f, -1.1f, 0.0f, 3.3f, -6.6f, 8.9f, 2.2f };

	std::cout << "Tablica: ";
	for (int i = 0; i < WIELKOSC; i++) {
		std::cout << tablica[i] << " ";
	}
	std::cout << std::endl;

	float max;
	float min;

	FindMinMax(tablica, WIELKOSC, &max, &min);

	std::cout << "Najwieksza liczba: " << max << std::endl;
	std::cout << "Najmniejsza liczba: " << min << std::endl;

	return 0;
}
