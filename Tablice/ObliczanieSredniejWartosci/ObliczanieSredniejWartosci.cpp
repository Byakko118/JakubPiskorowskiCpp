#include <iostream>
using namespace std;

int main()
{
	static int wielkosc = 5;
	double liczby[5];
	double suma = 0;
    for (int i = 0; i < wielkosc; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> liczby[i];
		suma += liczby[i];
		if (cin.fail()) {
			cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
			return 1;
		}
    }
	int srednia = suma / wielkosc;
	cout << "Srednia liczb: " << srednia << endl;
	return 0;
}