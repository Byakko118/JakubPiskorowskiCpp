#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int WIELKOSC = 101;
	char ciag[WIELKOSC];

	cout << "Podaj ciag znakow: ";
	cin.getline(ciag, WIELKOSC);

	int dlugosc = strlen(ciag);
	char odwrocony[WIELKOSC];
	for (int i = 0; i < dlugosc; i++) {
		odwrocony[i] = ciag[dlugosc - 1 - i];
	}
	odwrocony[dlugosc] = '\0';

	cout << "Odwrocony ciag: " << odwrocony << endl;
	return 0;
}